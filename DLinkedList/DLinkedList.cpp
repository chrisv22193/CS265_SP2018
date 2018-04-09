#include "DLinkedList.h"
#include "DNode.cpp"

template <class T>
DLinkedList<T>::DLinkedList()
{ 
    head = nullptr; 
	tail = nullptr;
	itemCount = 0;
}

/**************
* displayList *
**************/

template <class T>
void DLinkedList<T>::displayList() const
{
   DNode<T> *current = head;
   
   if ( current == nullptr )
   {
		cout << "Double Linked List is empty, nothing to output.";
   }
   else
	   while ( current != nullptr )
	   {
			cout << current->getValue() << " ";
			current = current->getNextNode();
	   }
	   
   cout << endl;
}

template <class T>
int DLinkedList<T>::size()
{
	return itemCount;
}

template <class T>
void DLinkedList<T>::insertFront(T newValue)
{
   DNode<T> *new_node = new DNode<T>(newValue);
   //cout << "New node created with value of " << new_node->getValue() << endl;
   if ( head == nullptr )
   {
		head = new_node;
		tail = head;
   }
   else
   {
   		head->setPreviousNode(new_node);
   		new_node->setNextNode(head);
   		//tail = head;
   		head = new_node;
   }
   itemCount++;
}

template <class T>
void DLinkedList<T>::insertAt(T newValue, int position) // insert node at the specified index
{
	// create new node
	// current = head
	// for i = 0; i<position; i++
	//		current = current->next
	// newnode->next = current
	// newnode->previous = current->previous
	// current->previous->next = newnode
	// current->previous = newnode
	// increment item count by 1
}

template <class T>
void DLinkedList<T>::insertBack(T newValue) // insert node to back of dlinkedlist
{
	DNode<T> *new_node = new DNode<T>(newValue);
   //cout << "New node created with value of " << new_node->getValue() << endl;
   if ( tail == nullptr )
   {
		tail = new_node;
		head = tail;
   }
   else
   {
   		tail->setNextNode(new_node);
   		new_node->setPreviousNode(tail);
   		tail = new_node;
   }
   itemCount++;
}

template <class T>
void DLinkedList<T>::deleteFront() // delete node at front of dlinkedlist 
{
	if ( head==tail )
	{
		if ( itemCount == 1 )
		{
			delete head;
			itemCount--;			
		}
	}
	else
	{
		DNode<T> *temp = head;
		head = head->getNextNode();
		temp->setNextNode(nullptr);
		head->setPreviousNode(nullptr);
		delete temp;
		itemCount--;
	}
}

template <class T>
void DLinkedList<T>::deleteAt(int position) // delete node at the specified index
{
	// current = head
	// for i = 0; i<position; i++
	//		current = current->next
	// current->next = current->previous
	// current->previous->next = current->next
	// current->next->previous = current->previous
	// decrement item count by 1
}

template <class T>
void DLinkedList<T>::deleteBack() // delete node at back of dlinkedlist
{
	if ( head==tail )
	{
		if ( itemCount == 1 )
		{
			delete head;
			itemCount--;			
		}
	}
	else
	{
		DNode<T> *temp = tail;
		tail = tail->getPreviousNode();
		temp->setPreviousNode(nullptr);
		tail->setNextNode(nullptr);
		delete temp;
		itemCount--;
	}
}

template <class T>
DLinkedList<T>::~DLinkedList()
{
   DNode<T> *nodePtr;   // To traverse the list
   DNode<T> *nextNode;  // To point to the next node

   // Position nodePtr at the head of the list.
   nodePtr = head;

   // While nodePtr is not at the end of the list...
   while (nodePtr != nullptr)
   {
      // Save a pointer to the next node.
      nextNode = nodePtr->getNextNode();

      // Delete the current node.
      delete nodePtr;

      // Position nodePtr at the next node.
      nodePtr = nextNode;
   }
}
