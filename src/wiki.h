#pragma once
#include <vector>
#include <map>
#include <string>
#include <stack>

using namespace std;

class wiki {
public:
    wiki(vector<vector<int>> adjacency, int num);
    wiki(string filename, int num);
    vector<vector<int>> getAdj();
    void setAdj(vector<vector<int>> toset);
    int getIndex(string article) { return articleIdx[article]; }
    string getArticle(int idx);
    vector<int> getTraversal();
    stack<int> getStack() { return s_; }
    vector<vector<int>> getSCC() { return scc; }
    void reader(string filename, int num);
    void DFS(int root, int num);
    void DFS(int s, vector<bool> visitedV);

    void fillOrder(int v, vector<bool> visited, stack<int> &Stack);

    wiki reverse(int num);

    void SCC(int num);

private:
    vector<vector<int>> adj; // adjacency lists for articles
    map<string, int> articleIdx; // Contains the indexes for each article
    stack<int> s_;
    string file; //contains filename for edges file
    vector<int> traversal; //vector of nodes visited in order of dfs traversal
    vector<vector<int>> scc;
    int node_num = 4203323; //total number of nodes
};