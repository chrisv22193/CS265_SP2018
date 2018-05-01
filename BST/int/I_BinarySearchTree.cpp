#include "TNode.h"
#include "I_BinarySearchTree.h"
#include <iostream>
using namespace std;

I_BinarySearchTree::I_BinarySearchTree()
{
	root = nullptr;
}

void I_BinarySearchTree::add(int item)			// add item to tree
{
	root = insertInSubTree(item, root);
}

void I_BinarySearchTree::remove(int item)
{
	root = remove_helper(item,root);
}

INode * I_BinarySearchTree::remove_helper(int item, INode * root) // remove item from tree
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
            INode *temp = root->getRightNode();
            delete root;
            return temp;
        }
        else if (root->getRightNode() == nullptr)
        {
            INode *temp = root->getLeftNode();
            delete root;
            return temp;
        }
 
        // node with two children: find the smallest node of the right child node
        INode* current = root->getRightNode();
        
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

bool I_BinarySearchTree::contains(int item)		// checks if tree contains item
{
	return isInSubTree(item, root);
}

void I_BinarySearchTree::inOrder()			// output tree in-order traversal
{
	showItemsInSubTree(root);
	cout << endl;
}

void I_BinarySearchTree::preOrder()		// output tree pre-order traversal
{
	showItemsPreOrderSubTree(root);
	cout << endl;
}

void I_BinarySearchTree::postOrder()		// output tree post-order traversal
{
	showItemsPostOrderSubTree(root);
	cout << endl;
}

INode * I_BinarySearchTree::insertInSubTree(int item, INode * subTreeRoot)
{
	if ( subTreeRoot == nullptr )	
	{
		return new INode(item,nullptr,nullptr);
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

bool I_BinarySearchTree::isInSubTree(int item, INode * subTreeRoot)
{
	if ( subTreeRoot == nullptr ) return false;
	else if ( subTreeRoot->getData() == item ) return true;
	else if ( item < subTreeRoot->getData() ) return isInSubTree(item, subTreeRoot->getLeftNode());
	else return isInSubTree(item, subTreeRoot->getRightNode());
}

void I_BinarySearchTree::showItemsInSubTree(INode * subTreeRoot)
{
	// in order traversal
	if ( subTreeRoot != nullptr )
	{
		showItemsInSubTree(subTreeRoot->getLeftNode());
		cout << subTreeRoot->getData() << " ";
		showItemsInSubTree(subTreeRoot->getRightNode());
	}
}

void I_BinarySearchTree::showItemsPreOrderSubTree(INode * subTreeRoot)
{
	// pre order traversal
	if ( subTreeRoot != nullptr )
	{
		cout << subTreeRoot->getData() << " ";
		showItemsInSubTree(subTreeRoot->getLeftNode());
		showItemsInSubTree(subTreeRoot->getRightNode());
	}
}

void I_BinarySearchTree::showItemsPostOrderSubTree(INode * subTreeRoot)
{
	// post order traversal
	if ( subTreeRoot != nullptr )
	{		
		showItemsInSubTree(subTreeRoot->getLeftNode());
		showItemsInSubTree(subTreeRoot->getRightNode());
		cout << subTreeRoot->getData() << " ";
	}
}
