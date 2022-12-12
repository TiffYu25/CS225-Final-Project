#include "wiki.h"
#include <iostream>
#include <fstream>
#include <stack>
#include <bitset>

//used for checking that strings are just numeric
bool is_digits(const std::string &str) {
    return str.find_first_not_of("0123456789") == string::npos;
}

/*unsigned int getIndexFromChar(unsigned char first, unsigned char second, unsigned char third) {
    bitset<8> uno = bitset<8>((unsigned int) first);
    bitset<8> dos = bitset<8>((unsigned int) second);
    bitset<8> tres = bitset<8>((unsigned int) third);
    bitset<24> uwu;
    size_t v;
    for (v = 0; v < 8; v++) {
        uwu[v] = tres[v];
    }
    for (v = 8; v < 16; v++) {
        uwu[v] = dos[v - 8];
    }
    for (v = 16; v < 24; v++) {
        uwu[v] = uno[v - 16];
    }    
    return (unsigned int) uwu.to_ulong();
}*/

wiki::wiki(vector<vector<unsigned int>> adjacency, unsigned int num) {
    node_num = num;
    adj = adjacency;
}

wiki::wiki(string filename, unsigned int num) {
    file = filename;
    reader(file, num);
}

void wiki::reader(string filename, unsigned int num) {
    ifstream infile(filename);
    vector<unsigned int> inner_vec;
    vector<vector<unsigned int>> toset(num, inner_vec);
    adj = toset;
    unsigned char read_value;
    ifstream stream{"../wee.bin", ios_base::in | ios_base::binary};
    stream.exceptions(ios_base::failbit | ios_base::badbit);
    int w = -1;
    for (unsigned int i = 0; i < 105517902; i++) {
        stream.read(reinterpret_cast<char*>(&read_value), 1);
        bitset<8> uno = bitset<8>((unsigned int) read_value);
        stream.read(reinterpret_cast<char*>(&read_value), 1);
        bitset<8> dos = bitset<8>((unsigned int) read_value);
        stream.read(reinterpret_cast<char*>(&read_value), 1);
        bitset<8> tres = bitset<8>((unsigned int) read_value);
        bitset<24> uwu;
        size_t v;
        for (v = 0; v < 8; v++) {
            uwu[v] = tres[v];
        }
        for (v = 8; v < 16; v++) {
            uwu[v] = dos[v - 8];
        }
        for (v = 16; v < 24; v++) {
            uwu[v] = uno[v - 16];
        }    
        unsigned int node = (unsigned int) uwu.to_ulong();
        if (node == (unsigned int) node_num) {
            w++;
            cout << w;
            cout << "\n";
        } else {
            adj[w].push_back(node);
        }
    }
}

/*void wiki::reader(string filename, int num) {
    ifstream infile(filename);
    vector<unsigned char> inner_vec;
    vector<vector<unsigned char>> toset(num, inner_vec);
    adj = toset;
    unsigned int row_one = 64;
    unsigned char new_row_one = (unsigned char) row_one;
    unsigned int row_two = 46;
    unsigned char new_row_two = (unsigned char) row_two;
    unsigned int row_three = 209;
    unsigned char new_row_three = (unsigned char) row_three;
    unsigned char read_value;
    ifstream stream{"../tests/hell/wee.bin", ios_base::in | ios_base::binary};
    stream.exceptions(ios_base::failbit | ios_base::badbit);
    int w = -1;
    for (unsigned int i = 0; i < 105517902; i++) {
        stream.read(reinterpret_cast<char*>(&read_value), 1);
        unsigned char aa = read_value;
        stream.read(reinterpret_cast<char*>(&read_value), 1);
        unsigned char bb = read_value;
        stream.read(reinterpret_cast<char*>(&read_value), 1);
        unsigned char cc = read_value;
        if (aa == new_row_one && bb == new_row_two && cc == new_row_three) {
            cout << w;
            cout << "\n";
            w++;
        } else {
            adj[w].push_back(aa);
            adj[w].push_back(bb);
            adj[w].push_back(cc);
        }
    }
    cout << "size of it all is ";
    cout << adj.size();
    cout << "\n";
}*/

/*void wiki::reader(string filename, int num) {
    ifstream infile(filename);

    //ignore first 2 vectors, this is all to get adj right size/to make each article index already there
    vector<int> inner_vec;
    vector<vector<int>> toset(num, inner_vec);
    adj = toset;

    //loads each line of the .txt as a string into string vector vec
    vector<string> vec;
    string line;
    while (getline(infile, line)) {
        vec.push_back(line);
	}

    //for loop completely populates adj while doing some cleaning checks in the process
    for (unsigned int i = 4; i < vec.size(); i++) {
        //if we reach empty line we should immediately exit
        if (i >= 101311617) {
            break;
        }
        string tmp = "";
        int x = 0;
        for (unsigned int j = 0; j < vec[i].length(); j++) {
            x = j;
            if (vec[i][j] == ' ') {
                break;
            }
            tmp += vec[i][j];
        }
        //by this point string tmp should be first number in line
        //check tmp is actually numeric
        if (tmp.empty() || !is_digits(tmp)) {
            cout << "first string not valid";
            cout << "\n";
            cout << i;
            return;
        }
        int toset = stoi(tmp);
        //bound check
        if (toset >= node_num || toset < 0) {
            cout << "first number out of bounds node";
            cout << i;
            return;
        }
        tmp = "";
        for (unsigned int w = x + 1; w < vec[i].length(); w++) {
            if (!isdigit(vec[i][w])) {
                break;
            }
            tmp += vec[i][w];
        }
        //by this point string tmp should be second number in line
        //check tmp is actually numeric
        if (tmp.empty() || !is_digits(tmp)) {
            cout << "second string not valid";
            cout << "\n";
            cout << i;
            return;
        }
        int toadd = stoi(tmp);
        //bounds check
        if (toadd >= node_num || toadd < 0) {
            cout << "second number out of bounds node";
            cout << i;
            return;
        }
        adj[toset].push_back(toadd);
        cout << i;
        cout << "\n";
    }
    //generating char array
    unsigned char* important = new unsigned char[316553706];
    unsigned int z = 0;
    for (unsigned int i = 0; i < adj.size(); i++) {
        cout << "this is row : ";
        cout << i;
        cout << '\n';
        unsigned int row_one = 64;
        unsigned char new_row_one = (unsigned char) row_one;
        important[z] = new_row_one;
        z++;
        unsigned int row_two = 46;
        unsigned char new_row_two = (unsigned char) row_two;
        important[z] = new_row_two;
        z++;
        unsigned int row_three = 209;
        unsigned char new_row_three = (unsigned char) row_three;
        important[z] = new_row_three;
        z++;
        for (unsigned int j = 0; j < adj[i].size(); j++) {
            cout << "node: ";
            cout << adj[i][j];
            cout << '\n';
            unsigned int toadd = (unsigned int) adj[i][j];
            bitset<24> bits = bitset<24>(toadd);
            bitset<8> one;
            bitset<8> two;
            bitset<8> three;
            size_t k;
            size_t u = 7;
            for (k = 23; k > 15; k--) {
                one[u] = bits[k];
                u--;
            }
            u = 7;
            for (k = 15; k > 7; k--) {
                two[u] = bits[k];
                u--;
            }
            u = 7;
            for (k = 7; k > 0; k--) {
                three[u] = bits[k];
                u--;
            }
            three[u] = bits[k];
            unsigned char aa = (unsigned char) one.to_ulong();
            unsigned char bb = (unsigned char) two.to_ulong();
            unsigned char cc = (unsigned char) three.to_ulong();
            important[z] = aa;
            z++;
            important[z] = bb;
            z++;
            important[z] = cc;
            z++;
        }
    }

    {
    std::ofstream stream{"../tests/hell/wee.bin", std::ios_base::out | std::ios_base::binary};
    stream.exceptions(std::ios_base::failbit | std::ios_base::badbit);
    stream.write(reinterpret_cast<const char*>(&(*important)), 316553706);
    }
    delete[] important;
}*/

vector<vector<unsigned int>> wiki::getAdj() {
    return adj;
}

void wiki::setAdj(vector<vector<unsigned int>> toset) {
    adj = toset;
}

string wiki::getArticle(unsigned int idx) {
    return "invalid";
}

//num is number of nodes
void wiki::DFS(unsigned int root, unsigned int num) {
    vector<bool> visited(num, false);
    stack<unsigned int> stk;
    stk.push(root);
    visited[root] = true;
    
    while (!stk.empty()) {
        int curr = stk.top();
        stk.pop();
        traversal.push_back(curr);
        for (unsigned int i = 0; i < adj[curr].size(); i++) {
            if (!visited[adj[curr][i]]) {
                stk.push(adj[curr][i]);
                visited[adj[curr][i]] = true;
            }
        } 
    }
}

vector<unsigned int> wiki::getTraversal() {
    return traversal;
}

void wiki::fillOrder(unsigned int v, vector<bool>& visited, stack<unsigned int> &Stack) {
    visited[v] = true;
    for (auto a : adj[v]) {
        if (!visited[a]) { fillOrder(a, visited, Stack); }
    }
    Stack.push(v);
}

wiki wiki::reverse(unsigned int num) {
    wiki w(vector<vector<unsigned int>>(num, vector<unsigned int>()), num);
    for (unsigned int u = 0; u < num; u++) {
        for (unsigned int v : adj[u]) { w.adj[v].push_back(u); }
    }
    return w;
}

void wiki::DFS(unsigned int s, vector<bool>& visitedV, vector<unsigned int>& components) {
    visitedV[s] = true;
    components.push_back(s);
    for (int i : adj[s]) {
        if (!visitedV[i]) { DFS(i, visitedV, components); }  
    }
}

void wiki::SCC(unsigned int num) {
    stack<unsigned int> Stack;
    // Fill vertices in stack according to their finishing times in DFS
    vector<bool> visited(num, false);
    for (unsigned int i = 0; i < num; i++) {
        if (!visited[i]) { fillOrder(i, visited, Stack); }
    }
    
    vector<bool> visitedV(num, false);
    wiki gr = reverse(num);
    while (!Stack.empty()) {
        int s = Stack.top();
        Stack.pop();
        if (!visitedV[s]) {
            vector<unsigned int> components;
            gr.DFS(s, visitedV, components);
            scc.push_back(components);
        }
    }
}
