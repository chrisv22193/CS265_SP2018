// A class template for holding double linked list.
// The node type is also a class template.
#ifndef DLINKEDLIST_H
#define DLINKEDLIST_H
#include "DNode.h"

/*******************
* DLinkedList class *
*******************/

template <class T>
class DLinkedList
{
private:
   DNode<T> *head;   // List head pointer
   DNode<T> *tail;   // List tail pointer
   int itemCount; // counter for number of items in dlinkedlist
   
public:
   // Constructor
   DLinkedList();
      
   // Destructor
   ~DLinkedList();
      
   // Linked list operations
   int size(); // return the size (or itemCount) of our dlinkedlist
   
   void insertFront(T); // insert node to front of dlinkedlist
   void insertAt(T, int); // insert node at the specified index
   void insertBack(T); // insert node to back of dlinkedlist
   void deleteFront(); // delete node at front of dlinkedlist 
   void deleteAt(int); // delete node at the specified index
   void deleteBack(); // delete node at back of dlinkedlist
   void displayList() const;
   
};
#endif

