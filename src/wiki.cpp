#include "wiki.h"
#include <iostream>
#include <fstream>
#include <stack>

//used for checking that strings are just numeric
bool is_digits(const std::string &str) {
    return str.find_first_not_of("0123456789") == string::npos;
}

wiki::wiki(vector<vector<int>> adjacency, int num) {
    node_num = num;
    adj = adjacency;

wiki::wiki(string filename, int num) {
    file = filename;
    reader(file, num);
}

void wiki::reader(string filename, int num) {
    ifstream infile(filename);

    //ignore first 2 vectors, this is all to get adj right size/to make each article index already there
    vector<int> inner_vec;
    vector<vector<int>> toset(num, inner_vec);
    adj = toset;

    //loads each line of the .txt as a string into string vector vec
    vector<string> vec;
    string line;
    while (getline(infile, line)) {
        vec.push_back(line);
	}

    //for loop completely populates adj while doing some cleaning checks in the process
    for (unsigned int i = 4; i < vec.size(); i++) {
        //if we reach empty line we should immediately exit
        if (!isdigit(vec[i][0])) {
            break;
        }
        string tmp = "";
        int x = 0;
        for (unsigned int j = 0; j < vec[i].length(); j++) {
            x = j;
            if (vec[i][j] == ' ') {
                break;
            }
            tmp += vec[i][j];
        }
        //by this point string tmp should be first number in line
        //check tmp is actually numeric
        if (tmp.empty() || !is_digits(tmp)) {
            cout << "first string not valid";
            cout << "\n";
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
            if (!isdigit(vec[i][w])) {
                break;
            }
            tmp += vec[i][w];
        }
        //by this point string tmp should be second number in line
        //check tmp is actually numeric
        if (tmp.empty() || !is_digits(tmp)) {
            cout << "second string not valid";
            cout << "\n";
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
        cout << i;
        cout << "\n";
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
        scc[scc.size() - 1].push_back(curr);
        for (unsigned int i = 0; i < adj[curr].size(); i++) {
            if (!visited[adj[curr][i]]) {
                stk.push(adj[curr][i]);
                visited[adj[curr][i]] = true;
            }
        }
        s_.push(curr);
    }
}

vector<int> wiki::getTraversal() {
    return traversal;
}

void wiki::fillOrder(int v, vector<bool> visited, stack<int> &Stack) {
    // Mark the current node as visited and print it
    visited[v] = true;
 
    // Recur for all the vertices adjacent to this vertex
    for (auto a : adj[v]) {
        if (!visited[a]) {
            fillOrder(a, visited, Stack);
        }
    }
    // All vertices reachable from v are processed by now, push v
    Stack.push(v);
}

wiki wiki::reverse(int num) {
    wiki w(vector<vector<int>>(num, vector<int>()), num);
    for (int u = 0; u < num; u++) {
        vector<int>::iterator i;
        for (int v : adj[u]) {
            w.adj[v].push_back(u);
        }
    }
    return w;
}

void wiki::DFS(int s, vector<bool> visitedV) {
    visitedV[s] = true;
    scc[scc.size() - 1].push_back(s);
    for (int i : adj[s]) {
        if (!visitedV[i]) {
            DFS(i, visitedV);
        }  
    }
}

void wiki::SCC(int num) {
    vector<bool> visitedV(num, false);
    wiki gr = reverse(num);

    // Create a copy of s_
    stack<int> Stack = s_;

    while (!Stack.empty()) {
        int s = Stack.top();
        Stack.pop();
        if (visitedV[s] == false) {
            scc.push_back(vector<int>());
            gr.DFS(s, visitedV);
        }
    }
}