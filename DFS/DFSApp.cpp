#include <iostream>
#include "graph.h"
using namespace std;

int main()
{
	Graph *theGraph = new Graph(false, 8);

	theGraph->addVertex('A');    // 0  (start for dfs)
        theGraph->addVertex('B');    // 1
        theGraph->addVertex('C');    // 2
        theGraph->addVertex('D');    // 3
        theGraph->addVertex('E');    // 4
        theGraph->addVertex('F');    // 5
        theGraph->addVertex('G');    // 6
        theGraph->addVertex('H');    // 7
	  	  
        theGraph->addEdge(0, 1);     // AB
        theGraph->addEdge(0, 3);     // AD
        theGraph->addEdge(0, 4);     // AE
        theGraph->addEdge(1, 2);     // BC
        theGraph->addEdge(1, 4);     // BE
        theGraph->addEdge(2, 5);     // CF
        theGraph->addEdge(3, 6);     // DG
        theGraph->addEdge(4, 6);     // EG
        theGraph->addEdge(5, 7);     // FH

	cout << "Depth First Search Results: ";
	theGraph->dfs();
	cout << endl; 
}
