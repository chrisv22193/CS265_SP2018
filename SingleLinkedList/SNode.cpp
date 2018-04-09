#include "SNode.h"
#include <iostream>
using namespace std;

template<class T> 
SNode<T>::SNode(T nodeData)
{
	data = nodeData;
	next = nullptr;
}

// Returns next node
template<class T> 
SNode<T> * SNode<T>::getNextNode()
{
	return next;
}

template<class T> 
void SNode<T>::setNextNode(SNode<T> *newNode)
{
	next = newNode;
}

template<class T> 
T SNode<T>::getData()
{
	return data;
}

template<class T> 
void SNode<T>::setData(T newData)
{
	data = newData;
}

template<class T>
void SNode<T>::displayNodeData()
{
	cout << data;
}
