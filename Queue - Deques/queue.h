#ifndef QUEUE_H
#define QUEUE_H

template <class T> class DListNode
{
private:
   T value;           // Node value
   DListNode<T> *next; // Pointer to the next node
   DListNode<T> *prev; // Pointer to the previous node
   
public:
   // Constructor
   DListNode (T nodeValue)
      { value = nodeValue;
        next = nullptr;
        prev = nullptr;
	}

	DListNode<T> *getNextNode()
	{
		return next;
	}

	DListNode<T> *getPreviousNode()
	{
		return prev;
	}
	
	T getValue()
	{
		return value;
	}
	
	void setNextNode(DListNode<T> *newNode)
	{
		next = newNode;
	}

	void setPreviousNode(DListNode<T> *newNode)
	{
		prev = newNode;
	}
	
	void setValue(T newValue)
	{
		value = newValue;
	}
};

template <class T> class Queue
{
	private:
		DListNode<T> *head, *tail;
		int num_items;
		
	public:
		Queue();
		void display();
		bool isEmpty();
		int size();
		T front();
		T back();
		void push_back(T);
		void enqueue(T);  // same as push_back
		T pop_front();
		T dequeue(); // same as pop front
};

#endif
