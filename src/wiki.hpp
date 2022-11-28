#include "wiki.h"
#include <iostream>
#include <fstream>
#include <stack>

//used for checking that strings are just numeric
bool is_digits(const std::string &str) {
    return str.find_first_not_of("0123456789") == string::npos;
}

wiki::wiki() {
    file = "enwiki-2013.txt";
    reader(file);
    DFS(0, node_num);
}

wiki::wiki(string filename) {
    file = filename;
    reader(file);
}

void wiki::reader(string filename) {
    ifstream infile(filename);

    //ignore first 2 vectors, this is all to get adj right size/to make each article index already there
    vector<int> inner_vec;
    vector<vector<int>> toset(node_num, inner_vec);
    adj = toset;

    //loads each line of the .txt as a string into string vector vec
    vector<string> vec;
    string line;
    while (getline(infile, line)) {
		vec.push_back(line);
	}

    //for loop completely populates adj while doing some cleaning checks in the process
    for (unsigned int i = 4; i < vec.size(); i++) {
        string tmp = "";
        int x = 0;
        for (unsigned int j = 0; j < vec[i].length(); j++) {
            if (vec[i][j] == ' ') {
                break;
            }
            tmp += vec[i][j];
            x = j;
        }
        //by this point string tmp should be first number in line
        //check tmp is actually numeric
        if (tmp.empty() || !is_digits(tmp)) {
            cout << "first string not valid";
            cout << i;
            return;
        }
        int toset = stoi(tmp);
        //bound check
        if (toset >= node_num || toset < 0) {
            cout << "first number out of bounds node";
            cout << i;
            return;
        }
        tmp = "";
        for (unsigned int w = x + 1; w < vec[i].length(); w++) {
            if (vec[i][w] == ' ') {
                break;
            }
            tmp += vec[i][w];
        }
        //by this point string tmp should be second number in line
        //check tmp is actually numeric
        if (tmp.empty() || !is_digits(tmp)) {
            cout << "first string not valid";
            cout << i;
            return;
        }
        int toadd = stoi(tmp);
        //bounds check
        if (toadd >= node_num || toadd < 0) {
            cout << "second number out of bounds node";
            cout << i;
            return;
        }
        adj[toset].push_back(toadd);
    }
}

vector<vector<int>> wiki::getAdj() {
    return adj;
}

void wiki::setAdj(vector<vector<int>> toset) {
    adj = toset;
}

string wiki::getArticle(int idx) {
    for(auto &it : articleIdx) { 
        if(it.second == idx) { 
            return it.first;
        } 
    } 
}

//num is number of nodes
void wiki::DFS(int root, int num) {
    vector<bool> visited(num, false);
    stack<int> stk;
    stk.push(root);
    visited[root] = true;
    while (!stk.empty()) {
        int curr = stk.top();
        stk.pop();
        traversal.push_back(curr);
        for (unsigned int i = 0; i < adj[curr].size(); i++) {
            if (!visited[adj[curr][i]]) {
                stk.push(adj[curr][i]);
                visited[adj[curr][i]] = true;
            }
        } 
    }
}

vector<int> wiki::getTraversal() {
    return traversal;
}


