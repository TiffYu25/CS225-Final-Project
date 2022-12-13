# Written Report

## Output and Correctness
* Our makefiles are running as expected as typing ```make``` works in our terminal.
* We have thoroughly tested out our graph and algorithms for any unknown bugs. This is including the tests to our helper functions to the main algorithms. However, we recently changed the structure of our dataset causing some test cases to not work as properly. We are unable to change these due to the lack of time.
* Our results will be shown in the terminal from ```main.cpp```.
* We have correctly converted our dataset’s txt file into a graph form using adjacency lists. We have tested this using sample txt files and test cases.
* We are able to print out the strongest connected component in our graph into ```scc.txt```.

### Algorithms & Traversals
* Our DFS traversal is working as expected. We even have implemented both the iterative and the recursive version.
* Our Strongly Connected Components was successful in calculating the most strongly connected subgraphs in our graph.
* Our Kruskal’s Algorithm is still a work in progress. It was supposed to determine the minimum and maximum spanning trees from our graph. Unfortunately, it has not been finalized yet.

## Results
* We were able to successfully run our Strongly Connected Component Algorithm along with our DFS traversal method.
* However, we were unable to finish and polish our Kruskal’s Algorithm as we were in a time crunch. 

Our project may have been a bit too ambitious considering how busy each of our schedules were. The project would have been slightly better if we were working with a smaller dataset. In addition, some of our team members were unfamiliar with using Github. As a consequence, some of our time was spent getting used to using Github and fixing problems related to Github through VSCode. We especially encountered problems with pulling and pushing our changes from main. If we were not encountering these Github related problems, we would have finished our project by the deadline.

During the development of the project, we did not anticipate the bugs and runtime errors we would encounter due to the massive size of the 2013 Wikipedia txt file. We had to convert our dataset from integers to 3 unique char combinations in order to have our algorithms compile quickly and to not have our computers crash as well. As a result, we had to spend a lot of time adjusting our current functions to satisfy our newly made graph structure. Most of our time was spent trying to figure out our compilation problem, causing us to not have that much time to focus on other parts of our project such as our Kruskal Algorithm.

What we would do differently next time is to manage and plan our time wisely. Many of our time loss was due to our lack of knowledge on the difficulty of handling large-scaled datasets.  In addition, a dataset that is easier and smaller to handle than our Wikipedia dataset would definitely have prevented all the problems that we have encountered.
