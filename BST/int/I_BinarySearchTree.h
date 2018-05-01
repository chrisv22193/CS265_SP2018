#ifndef I_BST_H
#define I_BST_H

// #define nullptr 0 // uncomment this line if your compiler complains about nullptr not being defined

class I_BinarySearchTree {
private:
	INode * root; // root of the tree
	
	INode * insertInSubTree(int, INode *);
	bool isInSubTree(int, INode *);
	void showItemsInSubTree(INode *);
	void showItemsPreOrderSubTree(INode *);
	void showItemsPostOrderSubTree(INode *);
	INode * remove_helper(int, INode *);

public:
	I_BinarySearchTree();
	
	void add(int);			// add item to tree
    	void remove(int); // remove item from tree
	bool contains(int);		// checks if tree contains item
	
	void inOrder();			// output tree in-order traversal
	void preOrder();		// output tree pre-order traversal
	void postOrder();		// output tree post-order traversal
	
};
#endif
