#include "wiki.h"
#include <iostream>
#include <fstream>

wiki::wiki() {
    filename = "enwiki-2013.txt";
    //number of total nodes
    int node_num = 4203323;

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

    //for loop completely populates adj
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
        int toset = stoi(tmp);
        tmp = "";
        for (unsigned int w = x + 1; w < vec[i].length(); w++) {
            if (vec[i][w] == ' ') {
                break;
            }
            tmp += vec[i][w];
        }
        int toadd = stoi(tmp);
        adj[toset].push_back(toadd);
    }
}

string wiki::getArticle(int idx) {
    for(auto &it : articleIdx) { 
        if(it.second == idx) { 
            return it.first;
        } 
    } 
}

