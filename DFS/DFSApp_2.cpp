// The format of the text file to read must be as follows:

// d
// n
// vertice labels
// edge order pairs
//
// where:
// d = D or d to specify graph is directed graph, any other characters deault to undirected graph
// n = number of vertices in graph
// vertice labels - labels for the graph vertices as single characters
// edge order pairs - in the format of: start end
// where start is the vertex edge starts and end is vertex where edge ends
//
// example of a 6 vertice directed graph in the next comment block:
// D
// 6
// 0 1 2 3 4 5
// 0 1
// 0 2
// 0 5
// 1 2
// 1 4
// 2 4
// 2 5
// 3 2
// 4 3
// 4 5
//
#include <iostream>
#include <fstream>
using namespace std;
#include "graph.h"
#include "stack.h"

int main(int argc, char* argv[])
{
	if (argc==1)
	{
		cout << "Usage: DFSApp_2 input_textfile" << endl;
		return 1;
	}

	ifstream inFile;
	inFile.open(argv[1]);
	if ( inFile )
	{
		char graph_type;
		inFile >> graph_type;
		bool directedGraph;

		if (graph_type=='D' || graph_type=='d') directedGraph=true;
		else directedGraph=false;

		int nv;
		inFile >> nv;  // first item in file is number of vertices

		Graph *theGraph = new Graph(directedGraph, nv); // assume graph is to be directed

		for(int i=0;i<nv;i++)
		{
			char lbl;
			inFile >> lbl;
			theGraph->addVertex(lbl);
		}

		int start, end;

		do
		{
			inFile >> start;
			if ( inFile.eof() ) break;
			inFile >> end;
			if ( inFile.eof() ) break;
			cout << "(" << start << ", " << end << ")" << endl;
			theGraph->addEdge(start,end);
		} while( true );
        	
		inFile.close();
		cout << "Depth First Search Results: ";
		theGraph->dfs();
		cout << endl;
	}
	else
	{
		cout << "Could not open the file " << argv[1] << endl;
		return 2;
	} 
}
