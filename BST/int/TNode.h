#ifndef TNODE_H
#define TNODE_H

// #define nullptr 0 // uncomment this line if your compiler complains about nullptr not being defined

class INode {
private:
	int data;			// Node data
	INode *left;	// Pointer to the left node
	INode *right; // Pointer to the right node
public:
	INode(int, INode *, INode *);
	INode * getLeftNode();
	INode * getRightNode();
	void setLeftNode(INode *);
	void setRightNode(INode *);	
	
	int getData();
	void setData(int);

	void displayNodeData();
};
#endif
