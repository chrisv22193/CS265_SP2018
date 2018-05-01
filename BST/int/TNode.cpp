#include "TNode.h"
#include <iostream>
using namespace std;

INode::INode(int item, INode *lft, INode *rgt)
{
	left = lft;
	right = rgt;
	data = item;
}

INode * INode::getLeftNode()
{
	return left;
}

INode * INode::getRightNode()
{
	return right;
}

void INode::setLeftNode(INode * newLeft)
{
	left = newLeft;
}

void INode::setRightNode(INode * newRight)
{
	right = newRight;
}

int INode::getData()
{
	return data;
}

void INode::setData(int newData)
{
	data = newData;
}

void INode::displayNodeData()
{
	cout << data;
}
