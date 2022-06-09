#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>
#include "DoublyLinkedListNode.h"

using namespace std;

class DoublyLinkedList {
public:
	DoublyLinkedList();
	void insertFront(int data);
	void insertBack(int data);
	void deleteNode(int data);
	int getFirst();
	int getLast();
	bool search(int data);
	int length();
	void print();
	void copyList(DoublyLinkedList& list);
	void destroyList();
	void initialize();
	~DoublyLinkedList();
private:
	DoublyLinkedListNode* first;
	DoublyLinkedListNode* last;
	int count;
};

#endif