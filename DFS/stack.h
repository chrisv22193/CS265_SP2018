#ifndef STACK_H
#define STACK_H
#include <iostream>

class SNode
{
	private:
		int value;
		SNode *next;
		
	public:
	
		SNode(int newItem, SNode *newNext)
		{
			value = newItem;
			next = newNext;	
		}	
		
		SNode * getNext()
		{
			return next;
		}
		
		int getData()
		{
			return value;
		}
};

// Stack class
class Stack
{
	private:
		SNode * top;
		
	public:
	Stack()
        {
            top = nullptr;
        }
		
	// Push
	void push(int newItem)
        {
            SNode * newNode = new SNode(newItem, top);
            top = newNode;
        }
		
	// Peek
	int peek()
        {
            return top->getData();	     
        }
		
	// Pop
	int pop()
        {
            int data = peek();
            SNode * temp = top;
            
            if ( !isEmpty() )
            {
                top = top->getNext();
                delete temp;
            }
            return data;
            
        }
		
	// isEmpty
	bool isEmpty()
        {
            return top == nullptr;
        }
};
#endif
