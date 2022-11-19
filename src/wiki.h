#pragma once
#include <vector>
#include <map>
#include <string>

using namespace std;

class wiki {
public:
    wiki();
    int getIndex(string article) { return articleIdx[article]; }
    string getArticle(int idx);
    void DFS(int root);
private:
    vector<vector<int>> adj; // adjacency matrix of articles
    map<string, int> articleIdx; // Contains the indexes for each article
    string filename; //contains filename for edges file
    vector<int> traversal; //vector of nodes visited in order of dfs traversal
    int node_num = 4203323; //total number of nodes
};