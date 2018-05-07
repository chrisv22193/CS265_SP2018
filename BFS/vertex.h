#ifndef VERTEX_H
#define VERTEX_H

// such a simple class (mostly a wrapper), we will not
// bother with a vertex.cpp file
class Vertex
{
	public:
		char label;
		bool wasVisited;

		Vertex()
		{
		}

		Vertex(char l)
		{
			label = l;
			wasVisited = false;
		}
};
#endif
