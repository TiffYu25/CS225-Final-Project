#include "wiki.h"
#include <iostream>
#include <fstream>
#include <stack>
#include <sstream>

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
    int size = 0;
    vector<vector<int>> vec = file_to_vector(filename, size);
    adj = vector<vector<int>>(size, vector<int>());
    //for loop completely populates adj while doing some cleaning checks in the process
    for (vector<int> line : vec) {
        int article = line[0];
        int hyperlink = line[1];
        adj[article].push_back(hyperlink);
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
    return "invalid";
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


