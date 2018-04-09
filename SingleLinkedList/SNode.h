#ifndef SNODE_H
#define SNODE_H

// #define nullptr 0 // uncomment this line if your compiler complains about nullptr not being defined

template<class T>
class SNode {
private:
	T data;			// Node data
	SNode<T> *next	;	// Pointer to the next node
public:
	SNode(T);
	SNode<T> * getNextNode();
	void setNextNode(SNode<T> *);
	
	T getData();
	void setData(T);

	void displayNodeData();
};
#endif
