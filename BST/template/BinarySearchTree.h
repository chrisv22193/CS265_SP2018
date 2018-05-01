#ifndef BST_H
#define BST_H

// #define nullptr 0 // uncomment this line if your compiler complains about nullptr not being defined

template<class T>
class BinarySearchTree {
private:
	TNode<T> * root; // root of the tree
	
	TNode<T> * insertInSubTree(T, TNode<T> *);
	bool isInSubTree(T, TNode<T> *);
	void showItemsInSubTree(TNode<T> *);
	void showItemsPreOrderSubTree(TNode<T> *);
	void showItemsPostOrderSubTree(TNode<T> *);
	TNode<T> * remove_helper(T, TNode<T> *);

public:
	BinarySearchTree();
	
	void add(T);			// add item to tree
        void remove(T);     		// remove first occurance of item from tree
	bool contains(T);		// checks if tree contains item
	
	void inOrder();			// output tree in-order traversal
	void preOrder();		// output tree pre-order traversal
	void postOrder();		// output tree post-order traversal

        // implement the following as an assignment
        bool isEmpty();                 // is tree empty
        void clear();                   // clear out the tree
        void remove_all(T);             // remove all occurences of parameter value	
};
#endif
