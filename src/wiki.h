#pragma once
#include <vector>
#include <map>
#include <string>

using namespace std;

class wiki {
public:
    wiki();
    wiki(string filename);
    int getIndex(string article) { return articleIdx[article]; }
    string getArticle(int idx);
    vector<int> getTraversal();
    void reader(string filename);
    void DFS(int root);
    vector<vector<int>> getAdj();
private:
    vector<vector<int>> adj; // adjacency lists for articles
    map<string, int> articleIdx; // Contains the indexes for each article
    string file; //contains filename for edges file
    vector<int> traversal; //vector of nodes visited in order of dfs traversal
    int node_num = 4203323; //total number of nodes
};