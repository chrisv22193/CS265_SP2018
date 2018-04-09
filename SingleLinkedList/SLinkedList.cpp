#include "SLinkedList.h"
#include <iostream>
using namespace std;

// Constructor / deconstructor
template<class T> 
SLinkedList<T>::SLinkedList()
{
	head = nullptr;
	tail = nullptr;
	itemCount = 0;
}

template<class T> 
SLinkedList<T>::~SLinkedList()
{
	SNode<T> *current;
	SNode<T> *nextNode;

	current = head;

	// while next is not nullptr, delete each node
	while (current != nullptr)
	{
		nextNode = current->getNextNode();
		delete current;
		current = nextNode;
	}
	itemCount = 0; // do we really need this???
}

// Single linked list operations
template<class T> 
int SLinkedList<T>::size()
{
	return itemCount;
}

template<class T> 
void SLinkedList<T>::insertFront(T value)
{
	// Create the new node holding data value
	SNode<T> *new_node = new SNode<T>(value);

    if (head == nullptr)
	{
        head = new_node;
        tail = head;
	}
	else
	{
		new_node->setNextNode(head);
        head = new_node;
	}
    itemCount++;
}

template<class T>
void SLinkedList<T>::insertBack(T value)		// implement as assignment
// note: similar to insertFront, but you are working with tail instead of head
{
	// 1. Create new node holding the value (see note #1 in notes file).
	// 2. if tail is null then:
	//	a. Assign tail to new_node.
	//	b. Assign head to tail.
	// 3. else...
	//	a. Set tail's next node to new_node (see note #2 in notes file).
	//	b. Assign tail to new_node.
	// 4. Increment item count by one.
}

template<class T>
void SLinkedList<T>::insertAt(int position, T value)	// implement as assignment
{
    // 1. Create new node holding the value (see note #1 in notes file).
    // 2. Assign current to head.
    // 3. Assign previous to nullptr.
    // 4. for i, starting at 0, while i<position, increment i by one.
    //	a. Assign previous to current
    //  b. Assign current to current's next node (see note #3 in notes file).
    // 5. Set new_node's next node to current.
    // 6. Set previous's next node to new_node.
    // 7. Increment count by 1.
}

template <class T>
T SLinkedList<T>::deleteFront()
{
    T value;
    if (head == tail)
	{
		if (itemCount == 1)
		{
            value = head->getData();
			delete head;
			delete tail;
		}
	}
	else
	{
		SNode<T> *temp = head;
		head = head->getNextNode();
        value = temp->getData();
		delete temp;
	}
	itemCount--;
    return value;
}

template<class T>
T SLinkedList<T>::deleteBack()			// implement as assignment
{
    // 1. Declare variable of type T named value.
    // 2. if head is equal to tail then:
    // 	a. if itemCount is equal to 1 then:
    //		  i.  Assign value to head's data value (see note #4 in notes file).
    //		 ii.  Delete the head node.
    //  b. Decrement item count by 1.
    // 3. else
    //	a. Assign value to the return value of deleteAt(itemCount-1).
    // 4. Return value back to caller.
}

template<class T>
T SLinkedList<T>::deleteAt(int position)	// implement as assignment
{
    // 1. Declare variable of type T named value.
    // 2. Assign current to head.
    // 3. Assign previous to nullptr.
    // 4. for i, starting at 0, while i<position, increment i by one.
    //	a. Assign previous to current
    //  b. Assign current to current's next node (see note #3 in notes file).
    // 5. Assign value to current node's data value.
	// 6. Set previous node's next node to current node's next node (see note #5 in notes file).
    // 7. Delete current node.
    // 8. Decrement item count by 1.
    // 9. Return value back to caller.
}
// delete after test

template<class T>
void SLinkedList<T>::displayList()
{
	SNode<T> *current = head;

	if (current == nullptr)
		cout << "List has nothing to output." << endl;
	else
	{
		while (current != nullptr)
		{
			cout << current->getData();
			current = current->getNextNode();
            if ( current != nullptr ) cout << " -> ";
		}
	}
	cout << endl;
}
