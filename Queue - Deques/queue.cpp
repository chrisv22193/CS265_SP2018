#ifndef QUEUE_H
#include "queue.h"

#include <iostream>
using namespace std;

template <class T> Queue<T>::Queue()
{
	head = nullptr;
	tail = nullptr;
	num_items = 0;
}

template <class T> void Queue<T>::display()
{
	DListNode<T> *current = head;
	if ( current == nullptr ) 
	{
		cout << "Queue is empty!" << endl;
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

template <class T> bool Queue<T>::isEmpty()
{
	return num_items == 0;	
}

template <class T> int Queue<T>::size()
{
	return num_items;	
}

template <class T> T Queue<T>::front()
{
	return head->getValue();	
}

template <class T> T Queue<T>::back()
{
	return tail->getValue();
}

template <class T> void Queue<T>::push_back(T newItem)
{
	DListNode<T> *new_node = new DListNode<T>(newItem);
	
	if ( head == nullptr )
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

template <class T> void Queue<T>::enqueue(T newItem)  // same as push_back
{
	push_back(newItem);	
}

template <class T> T Queue<T>::pop_front()
{
	if ( num_items > 0 )
	{
		T value = head->getValue();
		DListNode<T> *old_head = head;
		head = head->getNextNode();
		old_head->setNextNode(nullptr);
		if ( head != nullptr ) head->setPreviousNode(nullptr);
		num_items--;
		delete old_head;
		return value;
	}
	return (T)nullptr;
}

template <class T> T Queue<T>::dequeue() // same as pop front
{
	return pop_front();	
}

#endif
