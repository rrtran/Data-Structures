#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>
#include "DoublyLinkedListNode.h"

using namespace std;

class DoublyLinkedList {
public:
	DoublyLinkedList() {
		first = NULL;
		last = NULL;
		count = 0;
	}

	void insertFront(int data) {
		if (first == NULL) {
			DoublyLinkedListNode* node = new DoublyLinkedListNode;
			node->setData(data);
			first = node;
			last = node;
			count++;
			return;
		}
		else {
			DoublyLinkedListNode* node = new DoublyLinkedListNode;
			node->setData(data);
			node->setNextLink(first);
			first->setPreviousLink(node);
			first = node;
			count++;
			return;
		}
	}

	void insertBack(int data) {
		if (first == NULL) {
			DoublyLinkedListNode* node = new DoublyLinkedListNode;
			node->setData(data);
			first = node;
			last = node;
			count++;
			return;
		}
		else {
			DoublyLinkedListNode* node = new DoublyLinkedListNode;
			node->setData(data);
			node->setPreviousLink(last);
			last->setNextLink(node);
			last = node;
			count++;
			return;
		}
	}

	void deleteNode(int data) {
		if (first == NULL) {
			return;
		}
		else if (first->getData() == data) {
			if (count == 1) {
				delete first;
				first = NULL;
				last = NULL;
				count--;
				return;
			}
			else {
				DoublyLinkedListNode* temp = first;
				first = first->getNextLink();
				first->setPreviousLink(NULL);
				delete temp;
				temp = NULL;
				count--;
				return;
			}
		}
		else {
			DoublyLinkedListNode* current = first->getNextLink();
			while (current != NULL) {
				if (current->getData() == data) {
					if (current == last) {
						DoublyLinkedListNode* trailCurrent = current->getPreviousLink();
						trailCurrent->setNextLink(NULL);
						last = trailCurrent;
						delete current;
						current = NULL;
						count--;
						return;
					}
					else {
						DoublyLinkedListNode* trailCurrent = current->getPreviousLink();
						trailCurrent->setNextLink(current->getNextLink());
						current->getNextLink()->setPreviousLink(trailCurrent);
						delete current;
						current = NULL;
						count--;
						return;
					}
				}
				current = current->getNextLink();
			}
		}
	}

	int getFirst() {
		return first->getData();
	}

	int getLast() {
		return last->getData();
	}

	bool search(int data) {
		if (first == NULL) {
			return false;
		}
		else if (first->getData() == data) {
			return true;
		}
		else {
			DoublyLinkedListNode* current = first->getNextLink();
			while (current != NULL) {
				if (current->getData() == data) {
					return true;
				}
			}
			return false;
		}
	}

	int length() {
		return count;
	}

	void print() {
		DoublyLinkedListNode* current = first;
		while (current != NULL) {
			cout << current->getData() << " ";
			current = current->getNextLink();
		}
		cout << endl;
	}

	void copyList(DoublyLinkedList& list) {
		// TODO: define this function
	}

	void destroyList() {
		DoublyLinkedListNode* current = first;
		while (current != NULL) {
			DoublyLinkedListNode* temp = current;
			current = current->getNextLink();
			delete temp;
			temp = NULL;
		}
		first = NULL;
		last = NULL;
		count = 0;
	}

	void initialize() {
		destroyList();
	}

	~DoublyLinkedList() {
		destroyList();
	}
private:
	DoublyLinkedListNode* first;
	DoublyLinkedListNode* last;
	int count;
};

#endif