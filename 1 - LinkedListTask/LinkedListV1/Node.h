#pragma once
#include <string>
class Node
{
public:
	Node::Node(std::string data);
	~Node();

	Node* GetNext();
	void SetNext(Node* next);
	std::string GetData();

	void Execute();

private: 
	std::string m_data;
	Node *m_next;
};

