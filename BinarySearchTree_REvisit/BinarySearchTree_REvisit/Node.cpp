#include "Node.h"

Node::Node()
{
	this->number = 0;
}

Node::Node(const int number)
{
	this->number = number;
}

const int Node::GetValue()
{
	return this->number;
}

Node* Node::GetLeftChild()
{
	return this->left;
}

Node* Node::GetRightChild()
{
	return this->right;
}
