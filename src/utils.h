#include <utility>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <cassert>
#include <fstream>

using namespace std;

string file_to_string(const string & filename);

// Splits string to a vector based on a char
vector<string> SplitString(const string& str1, char sep);

// Converts vector to a managable int dataset that matches the txt file
// It also keeps track of the size of the number of articles
vector<vector<int>> file_to_vector(string filename, int& size);
