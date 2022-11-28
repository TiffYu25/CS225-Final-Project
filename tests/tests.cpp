#include <catch2/catch_test_macros.hpp>

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "wiki.h"

TEST_CASE("file reads properly check 1", "[test]") {
    wiki test("example 1.txt");
    vector<vector<int>> example = test.getAdj();
    const vector<vector<int>> correct_example = {{1, 2, 3, 4},\
     {4, 3, 2, 0}, \
     {0, 3, 4, 1}, \
     {1, 2, 4, 0}, \
     {2, 3, 0, 1}
     };

    REQUIRE(example == correct_example);
}


