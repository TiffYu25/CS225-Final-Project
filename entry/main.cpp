#include "wiki.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string> 
#include <bitset>
#include <cstddef>

bool is_digits(const std::string &str) {
    return str.find_first_not_of("0123456789") == string::npos;
}

int main() {
    /*
    //creating edges file
    unsigned int* important = new unsigned int[4206289];
    ifstream infile("../tests/enwiki-2013.txt");
    //loads each line of the .txt as a string into string vector vec
    vector<string> vec;
    string line;
    while (getline(infile, line)) {
        vec.push_back(line);
	}

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
            break;
        }
        int toset = stoi(tmp);
        //bound check
        if (toset >= 4206289 || toset < 0) {
            cout << "first number out of bounds node";
            cout << i;
            break;
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
            break;
        }
        int toadd = stoi(tmp);
        //bounds check
        if (toadd >= 4206289 || toadd < 0) {
            cout << "second number out of bounds node";
            cout << i;
            break;
        }
        unsigned int curr = important[toadd] + 1;
        important[toadd] = curr;
        cout << i;
        cout << "\n";
    }

    {
    std::ofstream stream{"../tests/hell/edge_weights.bin", std::ios_base::out | std::ios_base::binary};
    stream.exceptions(std::ios_base::failbit | std::ios_base::badbit);
    stream.write(reinterpret_cast<const char*>(&(*important)), 16825156);
    }*/

    

    
    
    /*string filename = "../tests/enwiki-2013.txt";
    wiki test(filename, 4206289);
    cout << '\n';*/

    //main code above this line

    /*const vector<vector<int>> test_graph = {
        {65, 68, 67},\
        {69, 68}, \
        {68}, \
        {69}, \
        {65,69,67}
     };

    unsigned char* weewoo = new unsigned char[45];
    unsigned int z = 0;
    for (unsigned int i = 0; i < test_graph.size(); i++) {
        cout << "this is row : ";
        cout << i;
        cout << '\n';
        unsigned int row_one = 64;
        unsigned char new_row_one = (unsigned char) row_one;
        weewoo[z] = new_row_one;
        z++;
        cout << new_row_one;
        unsigned int row_two = 46;
        unsigned char new_row_two = (unsigned char) row_two;
        weewoo[z] = new_row_two;
        z++;
        cout << new_row_two;
        unsigned int row_three = 209;
        unsigned char new_row_three = (unsigned char) row_three;
        weewoo[z] = new_row_three;
        z++;
        cout << new_row_three;
        cout << '\n';
        for (unsigned int j = 0; j < test_graph[i].size(); j++) {
            cout << "node: ";
            cout << test_graph[i][j];
            cout << '\n';
            unsigned int toadd = (unsigned int) test_graph[i][j];
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
            cout << aa;
            cout << bb;
            cout << cc;
            cout << '\n';
            weewoo[z] = aa;
            z++;
            weewoo[z] = bb;
            z++;
            weewoo[z] = cc;
            z++;
        }
    }

    {
    std::ofstream stream{"../tests/hell/wee.txt", std::ios_base::out | std::ios_base::binary};
    stream.exceptions(std::ios_base::failbit | std::ios_base::badbit);
    stream.write(reinterpret_cast<const char*>(&(*weewoo)), 45);
    }


    {
        unsigned char read_value;
        ifstream stream{"../tests/hell/wee.txt", ios_base::in | ios_base::binary};
        stream.exceptions(ios_base::failbit | ios_base::badbit);
        for (unsigned int i = 0; i < 15; i++) {
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
            cout << (unsigned int) uwu.to_ulong();
            cout << ' ';
        }
    }
    cout << '\n';
    delete[] weewoo;*/



    //diff test

    /*const vector<vector<int>> test_graph = {
        {65, 68, 67},\
        {69, 68}, \
        {68}, \
        {69}, \
        {65,69,67}
     };

    {
    ofstream stream{"../tests/hell/wee.txt", ios_base::out | ios_base::binary};
    stream.exceptions(ios_base::failbit | ios_base::badbit);
    for (unsigned int i = 0; i < test_graph.size(); i++) {
        cout << "this is row : ";
        cout << i;
        cout << '\n';
        unsigned int row_one = 64;
        unsigned char new_row_one = (unsigned char) row_one;
        cout << new_row_one;
        unsigned int row_two = 46;
        unsigned char new_row_two = (unsigned char) row_two;
        cout << new_row_two;
        unsigned int row_three = 209;
        unsigned char new_row_three = (unsigned char) row_three;
        cout << new_row_three;
        stream.write(reinterpret_cast<const char*>(&new_row_one), 1);
        stream.write(reinterpret_cast<const char*>(&new_row_two), 1);
        stream.write(reinterpret_cast<const char*>(&new_row_three), 1);
        for (unsigned int j = 0; j < test_graph[i].size(); j++) {
            cout << "node: ";
            cout << test_graph[i][j];
            cout << '\n';
            unsigned int toadd = (unsigned int) test_graph[i][j];
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
            cout << aa;
            cout << bb;
            cout << cc;
            cout << '\n';
            stream.write(reinterpret_cast<const char*>(&aa), 1);
            stream.write(reinterpret_cast<const char*>(&bb), 1);
            stream.write(reinterpret_cast<const char*>(&cc), 1);
        }
    }
    }
    cout << '\n';

    //needa make it process 3 at a time
    {
        unsigned char read_value;
        ifstream stream{"../tests/hell/wee.txt", ios_base::in | ios_base::binary};
        stream.exceptions(ios_base::failbit | ios_base::badbit);
        for (unsigned int i = 0; i < 45; i++) {
            stream.read(reinterpret_cast<char*>(&read_value), 1);
            cout << read_value;
            cout << (unsigned int) read_value;
            cout << '\n';
        }
    }
    cout << '\n';
    {
        unsigned char read_value;
        ifstream stream{"../tests/hell/wee.txt", ios_base::in | ios_base::binary};
        stream.exceptions(ios_base::failbit | ios_base::badbit);
        for (unsigned int i = 0; i < 45; i++) {
            stream.read(reinterpret_cast<char*>(&read_value), 1);
            cout << (unsigned int) read_value;
            cout << ' ';
        }
    }
    cout << '\n';
    {
        unsigned char read_value;
        ifstream stream{"../tests/hell/wee.txt", ios_base::in | ios_base::binary};
        stream.exceptions(ios_base::failbit | ios_base::badbit);
        for (unsigned int i = 0; i < 15; i++) {
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
            cout << (unsigned int) uwu.to_ulong();
            cout << ' ';
        }
    }
    cout << '\n';*/
    
    /*unsigned int too = 4206289;
    bitset<24> bits = bitset<24>(too);
    cout << bits;
    cout << '\n';
    size_t i;
    for (i = 23; i > 0; i--) {
        cout << "this is iteration: ";
        cout << i;
        cout << '\n';
        cout << bits[i];
        cout << '\n';
    }
    cout << "this is iteration: ";
    cout << i;
    cout << '\n';
    cout << bits[i];
    cout << '\n';
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
    cout << one;
    cout << two;
    cout << three;
    cout << '\n';
    unsigned char aa = (unsigned char) one.to_ulong();
    unsigned char bb = (unsigned char) two.to_ulong();
    unsigned char cc = (unsigned char) three.to_ulong();
    cout << aa;
    cout << '\n';
    cout << (unsigned int) aa;
    cout << '\n';
    cout << bb;
    cout << '\n';
    cout << (unsigned int) bb;
    cout << '\n';
    cout << cc;
    cout << '\n';
    cout << (unsigned int) cc;
    cout << '\n';
    bitset<8> uno = bitset<8>(64);
    bitset<8> dos = bitset<8>(46);
    bitset<8> tres = bitset<8>(209);
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
    cout << uwu;
    cout << '\n';
    cout << (unsigned int) uwu.to_ulong();
    cout << '\n';*/


    /*unsigned int wee = 33;
    unsigned char my_value = (unsigned char) wee;
    unsigned int hoozah = 252;
    unsigned char woo = (unsigned char) hoozah;
    {
    ofstream stream{"../tests/hell/wee.txt", ios_base::out |
    ios_base::binary};
    stream.exceptions(ios_base::failbit | ios_base::badbit);
    stream.write(reinterpret_cast<const char*>(&my_value), 1);
    stream.write(reinterpret_cast<const char*>(&my_value), 1);
    stream.write(reinterpret_cast<const char*>(&woo), 1);
    }
    unsigned char read_value;
    unsigned char special;
    {
    ifstream stream{"../tests/hell/wee.txt", ios_base::in | ios_base::binary};
    stream.exceptions(ios_base::failbit | ios_base::badbit);
    stream.read(reinterpret_cast<char*>(&read_value), 1);
    cout << (unsigned int) read_value;
    cout << '\n';
    stream.read(reinterpret_cast<char*>(&special), 1);
    cout << (unsigned int) special;
    cout << '\n';
    }
    if (read_value == my_value) {
        cout << "\nhooray\n";
    }*/
    return 0;
}