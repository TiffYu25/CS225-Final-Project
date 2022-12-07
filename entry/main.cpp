#include "wiki.h"
#include <iostream>

using namespace std;

int main() {
    // string filename = "../tests/enwiki-2013.txt";
    // wiki test(filename, 5);
    // vector<vector<int>> adjacency = test.getAdj();

    const vector<vector<int>> adj = {
        {1},\
        {2},\
        {4, 3},\
        {0},\
        {5},\
        {6},\
        {7},\
        {}
    };

    int num = 8;
    wiki g(adj, num);
    // Create Reverse Graph
    wiki gr = g.reverse(num);

    g.SCC(num);
    vector<vector<int>> scc = g.getSCC();
    for (vector<int> v : scc) {
        for (int i : v) {
            cout << i;
        }
        cout << endl;
    }
    // vector<vector<int>> adjacency = gr.getAdj();
    // for (unsigned int i = 0; i < adjacency.size(); i++) {
    //     for (int hyperlink : adjacency[i]) {
    //         cout << "article: " << i << " hyperlink: " << hyperlink << endl;
    //     }
    // }

    return 0;
}