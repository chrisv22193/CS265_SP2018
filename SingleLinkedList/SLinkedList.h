#ifndef SLINKEDLIST_H
#define SLINKEDLIST_H
#include "SNode.h"

// #define nullptr 0 // uncomment this line if your compiler complains about nullptr not being defined

template<class T>
class SLinkedList {
private:
	SNode<T> *head;
	SNode<T> *tail;
	int itemCount;

public:
	// Constructor / deconstructor
	SLinkedList();
	~SLinkedList();

	// Single linked list operations
	int size();
	void insertFront(T);
	void insertBack(T);		// implement as assignment
	void insertAt(int, T);		// implement as assignment
	T deleteFront();
	T deleteBack();			// implement as assignment
	T deleteAt(int);		// implement as assignment

	void displayList();
};
#endif
