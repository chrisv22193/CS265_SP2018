#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using std::cout;
using std::endl;

class SNode
{
private:
    int value;           // Node value
    SNode *next; // Pointer to the next node
    SNode *prev; // Pointer to the previous node
   
public:
    // Constructor
    SNode (int nodeValue)
    { 
 	    value = nodeValue;
        next = nullptr;
        prev = nullptr;
    }

    SNode *getNextNode()
    {
	return next;
    }
	
    int getValue()
    {
        return value;
    }
	
    void setNextNode(SNode *newNode)
    {
	    next = newNode;
    }

    void setValue(int newValue)
    {
	    value = newValue;
    }
};

class Queue
{
	private:
		SNode *head, *tail;
		int num_items;
		
	public:
    Queue()
    {
        head = nullptr;
        tail = nullptr;
        num_items = 0;
    }
    
    void display()
    {
        SNode *current = head;
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
    
    bool isEmpty()
    {
        return num_items == 0;
    }
    
    int size()
    {
        return num_items;
    }
    
    int front()
    {
        return head->getValue();
    }
    
    int back()
    {
        return tail->getValue();
    }
    
    void enqueue(int newItem)
    {
        SNode *new_node = new SNode(newItem);
        
        if ( head == nullptr )
        {
            head = new_node;
            tail = new_node;
            num_items=1;
        }	
        else
        {
            tail->setNextNode(new_node);
            tail = new_node;
            num_items++;
        }
    }
    
    int dequeue()
    {
        int value;
        if ( num_items > 0 )
        {
            value = head->getValue();
            SNode *old_head = head;
            head = head->getNextNode();
            old_head->setNextNode(nullptr);
            num_items--;
            delete old_head;
        }
        return value;
    }
};
#endif
