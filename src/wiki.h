#pragma once
#include <vector>
#include <map>
#include <string>

using namespace std;

class wiki {
public:
    wiki();
private:
    vector<vector<int>> hyperlink; // Contains indexes of hyperlinks
    map<string, int> getIndex; // Contains the indexes for each article
};