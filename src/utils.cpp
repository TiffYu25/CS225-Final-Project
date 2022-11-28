#include "utils.h"
#include <sstream>
#include <fenv.h>
#include <signal.h>
#include <vector>
#include <set>

string file_to_string(const string& filename){
  std::ifstream text(filename);

  std::stringstream strStream;
  if (text.is_open()) {
    strStream << text.rdbuf();
  }
  return strStream.str();
}

vector<string> SplitString(const string& str1, char sep) {
    vector<string> fields;
    std::string str = str1;
    std::string::size_type pos;
    while((pos=str.find(sep)) != std::string::npos) {
        fields.push_back(str.substr(0,pos));
        str.erase(0,pos+1);  
    }
    fields.push_back(str);
    return fields;
}

vector<vector<int>> file_to_vector(string filename, int& size) {
    string infile = file_to_string(filename);

    // Created a set to find the number of unique articles
    set<int> articles;

    // Splits the text file into a vector for each line
    vector<string> lines = SplitString(infile, '\n');
    vector<vector<int>> vec;
    string s, tmp; 
    stringstream ss(s);
    for (unsigned int i = 4; i < lines.size(); i++) {
        vector<string> line = SplitString(lines[i], ' ');
        vector<int> num_line;
        for (string l : line) {
            num_line.push_back(stoi(l));
        }
        vec.push_back(num_line);
        articles.insert(num_line[0]);
    }
    size = (int)articles.size();
    return vec;
}