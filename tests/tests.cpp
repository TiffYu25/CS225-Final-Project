/*#include <catch2/catch_test_macros.hpp>

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "wiki.h"

TEST_CASE("file reads properly check 1", "[test]") {
    string filename = "../tests/example 1.txt";
    wiki test(filename, 5);
    vector<vector<int>> example = test.getAdj();
    const vector<vector<int>> correct_example = {{1, 2, 3, 4},\
     {4, 3, 2, 0}, \
     {0, 3, 4, 1}, \
     {1, 2, 4, 0}, \
     {2, 3, 0, 1}
     };

    REQUIRE(example == correct_example);
}

TEST_CASE("file reads properly check 2", "[test]") {
    string filename = "../tests/example 2.txt";
    wiki test(filename, 5);
    vector<vector<int>> example = test.getAdj();
    const vector<vector<int>> correct_example = {{39, 16, 27, 15},\
     {5, 8}, \
     {13, 3, 4}, \
     {18, 39, 80, 1128474}, \
     {3879252, 93, 76, 15, 18}
     };

    REQUIRE(example == correct_example);
}

TEST_CASE("file reads properly check 3", "[test]") {
    string filename = "../tests/example 3.txt";
    wiki test(filename, 6);
    vector<vector<int>> example = test.getAdj();
    const vector<vector<int>> correct_example = {
        {39, 16, 27, 15},\
        {5, 8}, \
        {13, 3, 4}, \
        {18, 39, 80, 1128474}, \
        {3879252, 93, 7689, 15, 18},
        {1412456, 69420, 420, 567, 5, 678, 40}
     };

    REQUIRE(example == correct_example);
}

TEST_CASE("DFS check 1", "[test]") {
    //filename doesn't matter here since vector will be passed into adj setter, but I assume calling default constructor
    //and running on wiki txt will just make it rilly slow
    string filename = "../tests/example 1.txt";
    wiki test(filename, 5);
    const vector<vector<int>> test_graph = {{3, 2, 1},\
     {2, 0}, \
     {4, 1, 0}, \
     {0}, \
     {2}
     };
    test.setAdj(test_graph);
    test.DFS(0, 5);
    vector<int> correct_example{ 0, 1, 2, 4, 3 };
    vector<int> example = test.getTraversal();
    REQUIRE(example == correct_example);
}

TEST_CASE("DFS check 2", "[test]") {
    string filename = "../tests/example 2.txt";
    wiki test(filename, 5);
    const vector<vector<int>> test_graph = {
        {1, 4, 3},\
        {0, 4}, \
        {4}, \
        {0}, \
        {1,0,2}
     };
    test.setAdj(test_graph);
    test.DFS(0, 5);
    vector<int> correct_example{ 0, 3, 4, 2, 1 };
    vector<int> example = test.getTraversal();
    REQUIRE(example == correct_example);
}

TEST_CASE("Reverse Check 1", "[test]") {
    const vector<vector<int>> adj = {
        {1},\
        {2},\
        {4,3},\
        {0},\
        {5},\
        {6},\
        {7},\
        {}
    };
    int num = 8;
    wiki g(adj, num);
    wiki gr = g.reverse(num);
    const vector<vector<int>> correct_example = {
        {3},\
        {0},\
        {1},\
        {2},\
        {2},\
        {4},\
        {5},\
        {6}
    };
    vector<vector<int>> example = gr.getAdj();
    REQUIRE(example == correct_example);
}

TEST_CASE("DFS Reverse Check 1", "[test]") {
    const vector<vector<int>> adj = {
        {1},\
        {2},\
        {4,3},\
        {0},\
        {5},\
        {6},\
        {7},\
        {}
    };
    int num = 8;
    wiki g(adj, num);
    wiki gr = g.reverse(num);
    gr.DFS(7, num);
    vector<int> correct_example{ 7, 6, 5, 4, 2, 1, 0, 3 };
    vector<int> example = gr.getTraversal();
    REQUIRE(example == correct_example);
}*/