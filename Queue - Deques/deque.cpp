#ifndef DEQUE_H
#include "deque.h"

#include <iostream>
using namespace std;

template <class T> Deque<T>::Deque()
{
	head = nullptr;
	tail = nullptr;
	num_items = 0;
}

template <class T> void Deque<T>::display()
{
	DListNode<T> *current = head;
	if ( current == nullptr ) 
	{
		cout << "Deque is empty!" << endl;
	}
	else
	{
		for(int i=0;i<num_items;i++)
		{
			cout << current->getValue() << " ";
			current = current->getNextNode();
			if ( current == nullptr ) break; // is this really needed?			
		}	
		cout << endl;
	}
}

template <class T> bool Deque<T>::isEmpty()
{
	return num_items == 0;	
}

template <class T> int Deque<T>::size()
{
	return num_items;	
}

template <class T> T Deque<T>::front()
{
	return head->getValue();	
}

template <class T> T Deque<T>::back()
{
	return tail->getValue();
}

template <class T> void Deque<T>::push_back(T newItem)
{
	DListNode<T> *new_node = new DListNode<T>(newItem);
	
	if ( head == nullptr && tail == nullptr )
	{
		head = new_node;
		tail = new_node;
		num_items=1;	
	}	
	else
	{
		tail->setNextNode(new_node);
		new_node->setPreviousNode(tail);
		tail = new_node;
		num_items++;
	}
}

template <class T> void Deque<T>::enqueue_back(T newItem)  // same as push_back
{
	push_back(newItem);	
}

template <class T> T Deque<T>::pop_front()
{
	if ( num_items > 0 )
	{
		T value = head->getValue();
		DListNode<T> *old_head = head;
		head = head->getNextNode();
		if ( head == nullptr ) tail = nullptr;
		old_head->setNextNode(nullptr);
		if ( head != nullptr ) head->setPreviousNode(nullptr);
		num_items--;
		delete old_head;
		return value;
	}
	return (T)nullptr;
}

template <class T> T Deque<T>::dequeue_front() // same as pop front
{
	return pop_front();	
}

////////////////////////////////////////////////////////////////////////////
template <class T> void Deque<T>::push_front(T newItem)
{
	DListNode<T> *new_node = new DListNode<T>(newItem);
	
	if ( head == nullptr && tail == nullptr )
	{
		head = new_node;
		tail = new_node;
		num_items=1;	
	}	
	else
	{
		head->setPreviousNode(new_node);
		new_node->setNextNode(head);
		head = new_node;
		num_items++;
	}
}

template <class T> void Deque<T>::enqueue_front(T newItem)  // same as push_front
{
	push_front(newItem);	
}

template <class T> T Deque<T>::pop_back()
{
	if ( num_items > 0 )
	{
		T value = tail->getValue();
		DListNode<T> *old_tail = tail;
		tail = tail->getPreviousNode();
		if ( tail == nullptr ) head = nullptr;
		old_tail->setPreviousNode(nullptr);
		if ( tail != nullptr ) tail->setNextNode(nullptr);
		num_items--;
		delete old_tail;
		return value;
	}
	return (T)nullptr;
}

template <class T> T Deque<T>::dequeue_back() // same as pop_back
{
	return pop_back();	
}

#endif
