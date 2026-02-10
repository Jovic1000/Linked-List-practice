#include "Node.h"
#include <iostream>

Node::Node(std::string data) : m_data(data), m_next(nullptr)
{
}

Node::~Node()
{
}

Node* Node::GetNext()
{
	return m_next;
}

void Node::SetNext(Node* next)
{
	m_next = next;
}

std::string Node::GetData()
{
	return m_data;
}

void Node::Execute()
{
	std::cout << GetData() << std::endl;
}
