add_test( [==[file reads properly check 1]==] /workspaces/cs225/CS225-Final-Project/build/test [==[file reads properly check 1]==]  )
set_tests_properties( [==[file reads properly check 1]==] PROPERTIES WORKING_DIRECTORY /workspaces/cs225/CS225-Final-Project/build)
add_test( [==[file reads properly check 2]==] /workspaces/cs225/CS225-Final-Project/build/test [==[file reads properly check 2]==]  )
set_tests_properties( [==[file reads properly check 2]==] PROPERTIES WORKING_DIRECTORY /workspaces/cs225/CS225-Final-Project/build)
add_test( [==[file reads properly check 3]==] /workspaces/cs225/CS225-Final-Project/build/test [==[file reads properly check 3]==]  )
set_tests_properties( [==[file reads properly check 3]==] PROPERTIES WORKING_DIRECTORY /workspaces/cs225/CS225-Final-Project/build)
add_test( [==[DFS check 1]==] /workspaces/cs225/CS225-Final-Project/build/test [==[DFS check 1]==]  )
set_tests_properties( [==[DFS check 1]==] PROPERTIES WORKING_DIRECTORY /workspaces/cs225/CS225-Final-Project/build)
add_test( [==[DFS check 2]==] /workspaces/cs225/CS225-Final-Project/build/test [==[DFS check 2]==]  )
set_tests_properties( [==[DFS check 2]==] PROPERTIES WORKING_DIRECTORY /workspaces/cs225/CS225-Final-Project/build)
add_test( [==[Reverse Check 1]==] /workspaces/cs225/CS225-Final-Project/build/test [==[Reverse Check 1]==]  )
set_tests_properties( [==[Reverse Check 1]==] PROPERTIES WORKING_DIRECTORY /workspaces/cs225/CS225-Final-Project/build)
add_test( [==[DFS Reverse Check 1]==] /workspaces/cs225/CS225-Final-Project/build/test [==[DFS Reverse Check 1]==]  )
set_tests_properties( [==[DFS Reverse Check 1]==] PROPERTIES WORKING_DIRECTORY /workspaces/cs225/CS225-Final-Project/build)
add_test( [==[Strongly Connected Component]==] /workspaces/cs225/CS225-Final-Project/build/test [==[Strongly Connected Component]==]  )
set_tests_properties( [==[Strongly Connected Component]==] PROPERTIES WORKING_DIRECTORY /workspaces/cs225/CS225-Final-Project/build)
set( test_TESTS [==[file reads properly check 1]==] [==[file reads properly check 2]==] [==[file reads properly check 3]==] [==[DFS check 1]==] [==[DFS check 2]==] [==[Reverse Check 1]==] [==[DFS Reverse Check 1]==] [==[Strongly Connected Component]==])
