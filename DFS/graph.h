// dfs version of graph.h

#ifndef GRAPH_H
#define GRAPH_H

#include "vertex.h"
#include <iostream>
using std::cout;

class Graph
{
   private:
        bool directed; // is it a directed graph?
	int n_vertices; // number of vertices
	int last_vertex; // utility member for addVertex function
	Vertex *vertexList; // pointer to dynamic array of Vertex
	int **adjacencyMatrix;
    
    public:
        Graph(bool DirectedGraph, int NumberVertices)
        {
            directed=DirectedGraph;
            n_vertices=NumberVertices;
            last_vertex=0;
            vertexList = new Vertex[n_vertices];
        
            // dynamically setting up 2D array isn't pretty...
            adjacencyMatrix = new int*[n_vertices];
            for(int i=0;i<n_vertices;i++)
                adjacencyMatrix[i] = new int[n_vertices];        
        }
    
        void addVertex(char l)
        {
            vertexList[last_vertex++] = Vertex(l);
        }
    
        void addEdge(int start, int end)
        {
            adjacencyMatrix[start][end]=1;
                if ( !directed ) adjacencyMatrix[end][start]=1;
        }
    
        void displayVertex(int vertex)
        {
            cout << vertexList[vertex].label;
        }
    
        int getAdjacentUnvisitedVertex(int v)
        {
            for(int j=0; j<n_vertices; j++)
                if (adjacencyMatrix[v][j]==1 && vertexList[j].wasVisited==false)
                    return j;
            return -1;
        }
    
        // depth first search
        void dfs()
        {
            //TODO: Programming assignment
        }
};
#endif
