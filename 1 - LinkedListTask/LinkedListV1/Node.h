#pragma once

template<typename T>
class Node
{
public:
	Node::Node(T data);
	~Node();

	Node* GetNext();
	void SetNext(Node* next);
	T GetData();

	void Execute();

private: 
	T m_data;
	Node *m_next;
};

