// A class template for holding a double node.
// The node type is also a class template.
#ifndef DNODE_H
#define DNODE_H
#include <iostream>
using namespace std;

/**********************************************
*  The DNode class creates a type used to *
*  store a node of the double linked list.    *
**********************************************/

template <class T>
class DNode
{
private:
   T value;           // Node value
   DNode<T> *next; // Pointer to the next node
   DNode<T> *prev; // Pointer to the previous node
   
public:
   // Constructor
   DNode (T nodeValue);

   DNode<T> * getNextNode();
   void setNextNode(DNode<T> *);
   
   DNode<T> * getPreviousNode();	
   void setPreviousNode(DNode<T> *);

   T getValue();
   void setValue(T);
};

#endif
