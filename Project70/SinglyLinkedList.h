#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <iostream>
#include "SinglyLinkedListNode.h"

using namespace std;

class SinglyLinkedList {
public:
	SinglyLinkedList();
	void insertFront(int data);
	void deleteNode(int data);
	int getFirst();
	int length();
	void print();
	void destroyList();
	~SinglyLinkedList();
private:
	SinglyLinkedListNode* first;
	int count;
};

#endif 