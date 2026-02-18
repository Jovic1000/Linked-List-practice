#include "Node.h"
#include <iostream>

template<typename T>
Node<T>::Node(T data) : m_data(data), m_next(nullptr)
{
}

template<typename T>
Node<T>::~Node()
{
}



template<typename T>
Node<T>* Node<T>::GetNext()
{
	return m_next;
}

template<typename T>
void Node<T>::SetNext(Node* next)
{
	m_next = next;
}

template<typename T>
T Node<T>::GetData()
{
	return m_data;
}

template<typename T>
void Node<T>::Execute()
{
	std::cout << GetData() << std::endl;
}
