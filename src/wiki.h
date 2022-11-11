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
private:
    vector<vector<int>> adj; // adjacency matrix of articles
    map<string, int> articleIdx; // Contains the indexes for each article
};