#include "wiki.h"
#include <iostream>

using namespace std;

int main() {
    // string filename = "../tests/enwiki-2013.txt";
    // wiki test(filename, 5);
    // vector<vector<int>> adjacency = test.getAdj();

    const vector<vector<int>> adj = {
        {2, 3},\
        {0},\
        {1},\
        {4},\
        {}
    };

    int num = 5;
    wiki g(adj, num);
    // SCC
    g.SCC(num);

    g.writeSCCToFile();
    // // Create Reverse Graph
    // wiki gr = g.reverse(num);

    // vector<vector<int>> scc = g.getSCC();
    // for (vector<int> v : scc) {
    //     for (int i : v) {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // Print Adj List
    // vector<vector<int>> adjacency = gr.getAdj();
    // for (unsigned int i = 0; i < adjacency.size(); i++) {
    //     for (int hyperlink : adjacency[i]) {
    //         cout << "article: " << i << " hyperlink: " << hyperlink << endl;
    //     }
    // }

    return 0;
}
