#pragma once
#include <vector>
#include <map>
#include <string>
#include <stack>

using namespace std;

#pragma once
#include <vector>
#include <map>
#include <string>
#include <stack>

using namespace std;

class wiki {
public:
    wiki(vector<vector<unsigned int>> adjacency, unsigned int num);
    wiki(string filename, unsigned int num);
    vector<vector<unsigned int>> getAdj();
    void setAdj(vector<vector<unsigned int>> toset);
    string getArticle(unsigned int idx);
    map<unsigned int, string> getMap() { return articleMap; }
    vector<unsigned int> getTraversal();
    void reader(string filename, unsigned int num);
    void DFS(unsigned int root, unsigned int num);
    vector<vector<unsigned int>> getSCC() { return scc; }

    // DFS method only used for scc
    void DFS(unsigned int s, vector<bool>& visitedV, vector<unsigned int>& components);
    // Creates a Stack specific for SCC
    void fillOrder(unsigned int v, vector<bool>& visited, stack<unsigned int> &Stack);
    // Reverses an adjacency List
    wiki reverse(unsigned int num);
    // Computes strongly connected components
    void SCC(unsigned int num);

    void fileToArticle();
    void writeSCCToFile(unsigned int index);

private:
    vector<vector<unsigned int>> adj; // adjacency lists for articles
    map<unsigned int, string> articleMap; // Contains the indexes for each article
    string file; //contains filename for edges file
    vector<unsigned int> traversal; //vector of nodes visited in order of dfs traversal
    vector<vector<unsigned int>> scc;
    unsigned int node_num = 4206289; //total number of nodes
};

vector<string> SplitString(const string & str1, char sep);
