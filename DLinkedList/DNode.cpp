#include "DNode.h"
/**********************************************
*  The DNode class implementation             *
**********************************************/

template <class T>
DNode<T>::DNode (T nodeValue)
{ 
    value = nodeValue;
    next = nullptr;
    prev = nullptr;
}

template <class T>
DNode<T> * DNode<T>::getNextNode()
{
	return next;
}

template <class T>
DNode<T> * DNode<T>::getPreviousNode()
{
	return prev;
}
	
template <class T>
T DNode<T>::getValue()
{
	return value;
}

template <class T>	
void DNode<T>::setNextNode(DNode<T> *newNode)
{
	next = newNode;
}

template <class T>
void DNode<T>::setPreviousNode(DNode<T> *newNode)
{
	prev = newNode;
}
	
template <class T>
void DNode<T>::setValue(T newValue)
{
	value = newValue;
}
