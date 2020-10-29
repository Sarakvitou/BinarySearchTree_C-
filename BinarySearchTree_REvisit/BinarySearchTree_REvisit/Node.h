#pragma once
class Node
{
private:
	int number;
	Node* left = nullptr;
	Node* right = nullptr;
public:
	Node();
	Node(const int number);
	const int GetValue();
	Node* GetLeftChild();
	Node* GetRightChild();
};

