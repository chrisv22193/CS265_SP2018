#ifndef STACK_H
#define STACK_H
#include <iostream>

template <class T>
class StackNode
{
	private:
		T value;
		StackNode<T> *next;
		
	public:
	
		StackNode(T newItem, StackNode<T> *newNext)
		{
			value = newItem;
			next = newNext;	
		}	
		
		StackNode<T> * getNext()
		{
			return next;
		}
		
		T getData()
		{
			return value;
		}
};

// Stack class
template<class T>
class Stack
{
	private:
		StackNode<T> * top;
		
	public:
		Stack();
		
		// Push
		void push(T newItem);
		
		// Peek
		T peek();
		
		// Pop
		T pop();
		
		// isEmpty
		bool isEmpty();
		
		// clear
		void clear();
		
		// display stack contents
		void display();
};
#endif
