#include "TNode.h"
#include <iostream>
using namespace std;

template<class T>
TNode<T>::TNode(T item, TNode<T> *lft, TNode<T> *rgt)
{
	left = lft;
	right = rgt;
	data = item;
}

template<class T>
TNode<T> * TNode<T>::getLeftNode()
{
	return left;
}

template<class T>
TNode<T> * TNode<T>::getRightNode()
{
	return right;
}

template<class T>
void TNode<T>::setLeftNode(TNode<T> * newLeft)
{
	left = newLeft;
}

template<class T>
void TNode<T>::setRightNode(TNode<T> * newRight)
{
	right = newRight;
}

template<class T>
T TNode<T>::getData()
{
	return data;
}

template<class T>
void TNode<T>::setData(T newData)
{
	data = newData;
}

template<class T>
void TNode<T>::displayNodeData()
{
	cout << data;
}
