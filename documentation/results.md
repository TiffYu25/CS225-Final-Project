# Written Report

## Output and Correctness
* Our makefiles are running as expected as typing ```make``` works in our terminal.
* We have thoroughly tested out our graph and algorithms for any unknown bugs. This is including the tests to our helper functions to the main algorithms.
* Our results will be shown in the terminal from ```main.cpp```.
* We have correctly converted our dataset’s txt file into a graph form using adjacency lists. We have tested this using sample txt files and test cases.
* We are planning to put the output of our algorithms into a txt file containing the articles corresponding to each index (wip)

### Algorithms & Traversals
* Our DFS traversal is working as expected. We even have implemented both the iterative and the recursive version.
* Our Strongly Connected Components was successful in calculating the most strongly connected subgraphs in our graph.
* Our Kruskal’s Algorithm is still a work in progress. It was supposed to determine the minimum and maximum spanning trees from our graph. Unfortunately, it has not been finalized yet.

## Results we have Found
* We were able to successfully run our Strongly Connected Component Algorithm along with our DFS traversal method.
* However, we were unable to finish and polish our Kruskal’s Algorithm as we were in a time crunch. 

Our project may have been a bit too ambitious considering how busy each of our schedules were. The project would have been slightly better if we were working with a smaller dataset. In addition, some of our team members were unfamiliar with using Github. As a consequence, some of our time was spent getting used to using Github and its commands.

During the development of the project, we did not anticipate the bugs and runtime errors we would encounter due to the massive size of the 2018 Wikipedia txt file. We had to convert our dataset from integers to 3 unique char combinations in order to have our algorithms compile quickly and to not have our computers crash as well. Most of our time was spent trying to figure out our compilation problem, causing us to not have that much time to focus on other parts of our project.

What we would do differently next time is to manage our time wisely, and to handle a dataset that is easier to handle than our Wikipedia dataset.
