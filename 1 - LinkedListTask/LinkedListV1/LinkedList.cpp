#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() : m_head(nullptr)
{
}

LinkedList::~LinkedList()
{
}

Node* LinkedList::GetHead()
{
	return m_head;
}

std::string LinkedList::GetValueAt(int index)
{
	int count = 0;
	Node* selectedNode = GetHead();

	while (count != index)
	{
		selectedNode = selectedNode->GetNext();
		count++;
	}

	std::string value = selectedNode->GetData();

	return value;
}

void LinkedList::PushBack(Node* data)
{
	Node* newNode(new Node(*data));

	if (GetHead() == nullptr)
	{
		m_head = newNode;
	}
	else
	{
		Node* tempNode = GetHead();
		while (tempNode->GetNext() != nullptr)
		{
			tempNode = tempNode->GetNext();
		}

		tempNode->SetNext(newNode);
	}

}

void LinkedList::Insert(Node* previousNode, Node* data)
{
	Node* preNode = GetHead();
	
	bool loop = true;
	while (loop)
	{
		if (previousNode->GetData() == preNode->GetData())
		{
			Node* newNode(new Node(*data));
			Node* tempNode = preNode->GetNext();
			preNode->SetNext(newNode);
			newNode->SetNext(tempNode);
			

			loop = false;
		}
		else
		{
			preNode = preNode->GetNext();
		}
	}
}

void LinkedList::RemoveNode(Node* node)
{
	Node* delNode = GetHead();
	Node* preNodeLoc = new Node("");
	bool loop = true;

	while (loop)
	{
		if (node->GetData() == delNode->GetData())
		{
			if (delNode == GetHead())
			{
				Node* nextNode = delNode->GetNext();
				m_head = nextNode;
				
			}
			else
			{
				Node* nextNode = delNode->GetNext();
				preNodeLoc->SetNext(nextNode);
			}
			delete delNode;

			loop = false;
		}
		else
		{
			if (delNode != GetHead())
			{
				if ((delNode->GetNext())->GetData() == node->GetData())
				{
					preNodeLoc = delNode;
				}
			}
			delNode = delNode->GetNext();
		}
	}
}

void LinkedList::OutputList()
{
	Node* tempNode = new Node("");
	tempNode = m_head;
	bool loop = true;
	bool headCheck = false;
	while (loop)
	{
		if (GetHead() == nullptr)
		{
			loop = false;
			break;
		}
		else
		{
			
			if (!headCheck)
			{
				m_head->Execute();
				headCheck = true;
			}
			else
			{
				tempNode = tempNode->GetNext();
				if (tempNode == nullptr)
				{
					loop = false;
					break;
				}
				else
				{
					tempNode->Execute();
				}
			}
		}
	}
}


