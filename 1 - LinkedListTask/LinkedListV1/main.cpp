#include <iostream>
#include "LinkedList.h"

int main() {
	LinkedList *list = new LinkedList();

	// Put your testing stuff here..
	Node* testNode = new Node("one");
	list->PushBack(testNode);
	
	Node* testNode2 = new Node("two");
	list->PushBack(testNode2);
	
	Node* testNode3 = new Node("three");
	list->PushBack(testNode3);

	list->OutputList();
	

	system("pause");
	

	Node* testInsertNode = new Node("insert");
	list->Insert(testNode, testInsertNode);

	list->OutputList();

	system("pause");

	list->RemoveNode(testNode);
	list->OutputList();

	system("pause");

	std::cout << list->GetValueAt(2) << std::endl;


 	system("pause");
	delete list;
}