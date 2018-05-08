#include <iostream>
#include <fstream>
#include "graph.h"
using namespace std;

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
			bool readData = inFile >> start >> end;
			if (readData==false) break;
			theGraph->addEdge(start,end);
		} while(true);
        	
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

