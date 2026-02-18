#pragma once
#include "Node.h"

template<typename T>
class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	Node* GetHead();
	std::string GetValueAt(int index);
	void PushBack(Node* data);
	void Insert(Node* previousNode, Node* data);
	void RemoveNode(Node* node);
	void OutputList();
	

private: 
	Node* m_head;
	
	
};

