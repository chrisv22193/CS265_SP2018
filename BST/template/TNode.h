#ifndef TNODE_H
#define TNODE_H

// #define nullptr 0 // uncomment this line if your compiler complains about nullptr not being defined

template<class T>
class TNode {
private:
	T data;			// Node data
	TNode<T> *left;	// Pointer to the left node
	TNode<T> *right; // Pointer to the right node
public:
	TNode(T, TNode<T> *, TNode<T> *);
	TNode<T> * getLeftNode();
	TNode<T> * getRightNode();
	void setLeftNode(TNode<T> *);
	void setRightNode(TNode<T> *);
	
	T getData();
	void setData(T);

	void displayNodeData();
};
#endif
