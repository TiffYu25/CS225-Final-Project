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
    vector<vector<int>> getSCC() { return scc; }
    void reader(string filename, int num);
    void DFS(int root, int num);

    // DFS method only used for scc
    void DFS(int s, vector<bool>& visitedV, vector<int>& components);
    // Creates a Stack specific for SCC
    void fillOrder(int v, vector<bool>& visited, stack<int> &Stack);
    // Reverses an adjacency List
    wiki reverse(int num);
    // Computes strongly connected components
    void SCC(int num);

    void writeSCCToFile();

private:
    vector<vector<int>> adj; // adjacency lists for articles
    map<string, int> articleIdx; // Contains the indexes for each article
    string file; //contains filename for edges file
    vector<int> traversal; //vector of nodes visited in order of dfs traversal
    vector<vector<int>> scc;
    int node_num = 4203323; //total number of nodes
};
