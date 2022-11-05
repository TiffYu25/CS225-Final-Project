## Leading Question 

Given a dataset of all hyperlinks in a wikipedia article, we will find and provide a list of strongly related articles to the given article. In an article, you can find many hyperlinks that can lead to different articles. It is possible to traverse through these hyperlinks in order to check whether a path exists from one article to another. 
We can traverse through hyperlinks using DFS to figure out whether a path exists from an article A to an article B, then store each unique path and count them, both from article A to B and from B to A, before averaging the two to obtain a kind of measure of how related the two articles are relative to everything else. 
We can then partition the graph into all its strongly connected components and rank them by summing all the relationship strengths contained in it, thus creating a partition of wikipedia that leads to being able to answer our leading questions, like what some of the most dominating semantic categories are on Wikipedia. Since a largest connected component alone on wikipedia is often too broad, using a metric that measures just how interconnected the nodes really are overall in that component will give us a better understanding of the ones that are truly one dominating category, and without a convoluted hierarchy with many overlapping subsets. Furthermore, by averaging the relationship strengths instead of purely summing, we may obtain a measure of the density of interconnectedness in a connected component independent of the number of nodes, which could lead to identification of how far both figures (that density and number of nodes) strays from each other (in terms of contribution to total interconnectedness we measure above), and thus a ranking in terms of an equilibrium of both. This helps in further identifying how interconnected and significant a certain topic is (represented by a connected component) in as detailed a way as possible. 
To traverse through this dataset’s paths we will use the algorithms DFS, Kruskal’s Algorithm, and Strongly Connected Component. DFS will allow us to traverse through the wiki hyperlink data. We will additionally use Kruskal’s algorithm for identifying the maximum and minimum spanning trees as unique datapoints to look at interconnectedness of such subsets without the strongly connected requirement, just to see how much the result may diverge. The Strongly Connected Components algorithm will be used to create our initial partition of the whole graph into strongly connected components, for the following analysis of semantic relatedness. All other functions will simply be storing the data collected by these algorithms in a compact way as we see fit. 


# Dataset Acquisition

## Data Format

The source of the dataset is the Stanford Large Dataset Collection (https://snap.stanford.edu/data/enwiki-2013.html).  The data itself is simply a csv consisting of wikipedia article titles appropriately indexed (on each line: [index],”[title]”) and a .txt consisting of every edge on each line, labeled appropriately by the node indices corresponding to the edge but separated with a space. All in all, the data represents a directed graph where an edge from node a to node b (a b) means the article indexed by a contains a hyperlink to the article indexed by b. This data was collected as part of a snapshot of the English wikipedia in 2013, consisting of around 4203323 article names/nodes, the names csv being about 121 MB while the txt with the edges is a sizable 1.44 gb. 

## Data Correction

As part of our checks to ensure the data is error-free, we’ll have bounds checks to make sure all values are between 0 and 4203322 (inclusive) and that for the .txt, each line is formatted in an edge supporting way by reading each line into a char vector, checking that the first ‘ ‘ appears after some elements and is followed by more. Otherwise a check to make sure all the other elements on the same line will output an integer when inputted to std::stoi. 

For the csv, same process will be followed as far as reading each line into a char vector, though this time ensuring it’s in comma delimited format supporting our int, name format by checking that each element before ‘,’ can output an integer when inputted into std::stoi and that all the following elements are surrounding by quotation mark characters. 

As the data comes directly from Stanford’s Large Dataset collections, it’s likely already been cleaned with any errors accounted for, so any would be sparse and far between. In the event we encounter one though, we’ll adjust the csv and txt to fix it, cross referencing between the index and actual article name to make sure the edges are correct to the best of our ability.


## Data Storage

Since our data consists of a list of directed components, we plan on utilizing a 2d vector or structure similar to that (such as a map) to organize our data. In general, we would like to represent our data with indices (key) mapped to sets (containing indices of the articles that are hyperlinked in the key’s index), and some of our options for doing this include: 
2D vector / Adjacency Matrix/List: where each row represents an article with the respective index and each column represents an index of an article that is hyperlinked in article with the row’s index
Map: where each key represents an index of an article and each value is set, vector, list, etc that holds all the hyperlinked articles’ indexes 
		For example, if there exists the directed relationships: 
			0 2
			0 4
			0 5
		We know that the article with index 0 contains hyperlinks to the articles with indices 2, 4, and 5, and we would store this accordingly:
2D Vectors / Adjacency Matrix/List: [[2, 4, 5]]
Map: <0, (2, 4, 5)>
		We estimate that our program will run in O(n^2) time since we are essentially populating a matrix type data structure. 

## Algorithm 

In our Strongly Connected Components algorithm, the functions will require the input of a stack<int> which contains the indexes of the corresponding hyperlinks to an article. The way we will implement this algorithm will include a DFS helper method.  
The DFS helper method will require an index and a visited array, list, or vector containing bools whether a node in the graph was visited or not.
In Kruskal’s algorithm, we will use this to find the maximum and minimum spanning tree of the entire wikipedia graph. This will require an adjacency matrix of all related articles to be used for this function. 

In our Strongly Connected Components algorithm, after receiving our stack of node indexes, we will go through the stack and pop the node index when it has been visited. As the stack gets popped, the index gets printed. This index will be the index of a strongly connected hyperlink.
Our DFS helper method is a void function that only adjusts and sets indexes in the visited array, list, or vector as visited. Therefore, our DFS method will not return anything.
In Kruskal’s algorithm, we will have the function return a vector or a list containing the article indices corresponding to the tree. We will have a function to print the names of the articles.
DFS has a runtime of O(n), Kruskal’s Algorithm has a runtime of O(nlog(n)), and the Strongly Connected Components will have a runtime of O(n). We plan on using these algorithms separately from each other so our estimated Big O efficiency, theoretically, will be at most O(nlog(n)).

## Timeline

1. Determine the subject of our project, create project proposal, create team contract, create github repository.

2. Find and create a basic structure for our project (ex: creating files such as Makefile, CMake, or .hpp / .h files). In addition, we plan to figure out a step-by-step process on how to achieve parts of our project in the timeline (ex: functions or classes). May start on some of the functions needed to access data from accessing hyperlink network data.

3. The team will figure out how to access and use our wiki hyperlink dataset. In addition, we will write functions on how to access parts of the dataset. In addition, some members will work on creating test cases for when we’re creating our algorithms.

4. We will continue working and possibly finish our data accessing functions. In addition, we will start working on creating our DFS, Dijkstra, and the Strongly Connected Component algorithms.

5. The algorithm functions will be finalized and made sure that it is working. In addition, we will start on functions that will allow us to display resulting, related articles from our algorithms.

6. Finishing touches: make sure the code is working, is presentable, has a descriptive README. Moreover, we will create a written report (results.md) and a 10 minute video presentation of our finished product.
