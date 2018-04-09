#ifndef DEQUE_H
#define DEQUE_H

template <class T>
class DListNode
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

template <class T> class Deque
{
	private:
		DListNode<T> *head, *tail;
		int num_items;
		
	public:
		Deque();
		void display();
		bool isEmpty();
		int size();
		T front();
		T back();
		void push_back(T);
		void enqueue_back(T); // same as push_back
		void push_front(T); // new for deque
		void enqueue_front(T); // same as push_front
		T pop_front();
		T dequeue_front(); // same as pop_front
		T pop_back(); // new for deque
		T dequeue_back(); // same as pop_back
};

#endif
