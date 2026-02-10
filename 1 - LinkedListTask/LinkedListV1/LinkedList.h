#pragma once
#include "Node.h"

class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	Node* GetHead();
	int GetNodes();
	void PushBack(Node* data);
	void Insert(Node* previousNode, Node* data);
	void RemoveNode(Node* node);
	void OutputList();
	

private: 
	Node* m_head;
	
};

