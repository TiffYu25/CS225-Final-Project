#include "wiki.h"

using namespace std;

int main() {
    string filename = "../tests/enwiki-2013.txt";
    wiki test(filename);
    vector<vector<int>> adjacency = test.getAdj();
    for (unsigned int i = 0; i < adjacency.size(); i++) {
        for (int hyperlink : adjacency[i]) {
            cout << "article: " << i << " hyperlink: " << hyperlink << endl;
        }
    }
    return 0;
}