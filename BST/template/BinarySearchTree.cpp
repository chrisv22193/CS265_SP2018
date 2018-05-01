#include "TNode.h"
#include "BinarySearchTree.h"
#include <iostream>
using namespace std;

template<class T>
BinarySearchTree<T>::BinarySearchTree()
{
	root = nullptr;
}

template<class T>
void BinarySearchTree<T>::add(T item)			// add item to tree
{
	root = insertInSubTree(item, root);
}

template<class T>
void BinarySearchTree<T>::remove(T item)
{
	root = remove_helper(item,root);
}

template<class T>
TNode<T> * BinarySearchTree<T>::remove_helper(T item, TNode<T> * root) // remove item from tree
{
	// base case (exit condition) for recursive removal
    if (root == nullptr) return root;
 
    // If the item to be removed is less than the root item, it is in left subtree
    if (item < root->getData())
       	root->setLeftNode(remove_helper(item, root->getLeftNode()));
 
    // If the item to be removed is greater than the root item, it is in right subtree
    else if (item > root->getData())
        root->setRightNode(remove_helper(item, root->getRightNode()));
 
    // if key is same as root's key, then This is the node
    // to be deleted
    else
    {
        // node with only one child or no child
        if (root->getLeftNode() == nullptr)
        {
            TNode<T> *temp = root->getRightNode();
            delete root;
            return temp;
        }
        else if (root->getRightNode() == nullptr)
        {
            TNode<T> *temp = root->getLeftNode();
            delete root;
            return temp;
        }
 
        // node with two children: find the smallest node of the right child node
        TNode<T>* current = root->getRightNode();
        
        /* loop down to find the leftmost leaf */
        while (current->getLeftNode() != nullptr)
            current = current->getLeftNode();
        
        // Copy the smallest left most node of the right child node's content to this node
        root->setData(current->getData());
 
        // Delete the inorder successor
        root->setRightNode(remove_helper(current->getData(), root->getRightNode()));
    }
    return root;
}

template<class T>
bool BinarySearchTree<T>::contains(T item)		// checks if tree contains item
{
	return isInSubTree(item, root);
}

template<class T>
void BinarySearchTree<T>::inOrder()			// output tree in-order traversal
{
	showItemsInSubTree(root);
	cout << endl;
}

template<class T>
void BinarySearchTree<T>::preOrder()		// output tree pre-order traversal
{
	showItemsPreOrderSubTree(root);
	cout << endl;
}

template<class T>
void BinarySearchTree<T>::postOrder()		// output tree post-order traversal
{
	showItemsPostOrderSubTree(root);
	cout << endl;
}

template<class T>
TNode<T> * BinarySearchTree<T>::insertInSubTree(T item, TNode<T> * subTreeRoot)
{
	if ( subTreeRoot == nullptr )	
	{
		return new TNode<T>(item,nullptr,nullptr);
	}
	else if ( item < subTreeRoot->getData() )
	{
		subTreeRoot->setLeftNode(insertInSubTree(item, subTreeRoot->getLeftNode()));
		return subTreeRoot;
	}
	else
	{
		subTreeRoot->setRightNode(insertInSubTree(item, subTreeRoot->getRightNode()));
		return subTreeRoot;
	}
}

template<class T>
bool BinarySearchTree<T>::isInSubTree(T item, TNode<T> * subTreeRoot)
{
	if ( subTreeRoot == nullptr ) return false;
	else if ( subTreeRoot->getData() == item ) return true;
	else if ( item < subTreeRoot->getData() ) return isInSubTree(item, subTreeRoot->getLeftNode());
	else return isInSubTree(item, subTreeRoot->getRightNode());
}

template<class T>
void BinarySearchTree<T>::showItemsInSubTree(TNode<T> * subTreeRoot)
{
	// in order traversal
	if ( subTreeRoot != nullptr )
	{
		showItemsInSubTree(subTreeRoot->getLeftNode());
		cout << subTreeRoot->getData() << " ";
		showItemsInSubTree(subTreeRoot->getRightNode());
	}
}

template<class T>
void BinarySearchTree<T>::showItemsPreOrderSubTree(TNode<T> * subTreeRoot)
{
	// pre order traversal
	if ( subTreeRoot != nullptr )
	{
		cout << subTreeRoot->getData() << " ";
		showItemsInSubTree(subTreeRoot->getLeftNode());
		showItemsInSubTree(subTreeRoot->getRightNode());
	}
}

template<class T>
void BinarySearchTree<T>::showItemsPostOrderSubTree(TNode<T> * subTreeRoot)
{
	// post order traversal
	if ( subTreeRoot != nullptr )
	{		
		showItemsInSubTree(subTreeRoot->getLeftNode());
		showItemsInSubTree(subTreeRoot->getRightNode());
		cout << subTreeRoot->getData() << " ";
	}
}
