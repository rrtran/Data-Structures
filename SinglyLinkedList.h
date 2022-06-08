#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <iostream>
#include "SinglyLinkedListNode.h"

using namespace std;

class SinglyLinkedList {
public:
	SinglyLinkedList() {
		first = NULL;
		count = 0;
	}

	void insertFront(int data) {
		if (first == NULL) {
			SinglyLinkedListNode* node = new SinglyLinkedListNode;
			node->setData(data);
			node->setLink(NULL);
			first = node;
			count++;
		}
		else {
			SinglyLinkedListNode* node = new SinglyLinkedListNode;
			node->setData(data);
			node->setLink(first);
			first = node;
			count++;
		}
	}

	void deleteNode(int data) {
		if (first == NULL) {
			return;
		}
		else if (first->getData() == data) {
			SinglyLinkedListNode* temp = first;
			first = first->getLink();
			delete temp;
			temp = NULL;
			count--;
			return;
		}
		else {
			SinglyLinkedListNode* current = first->getLink();
			SinglyLinkedListNode* trailCurrent = first;
			while (current != NULL) {
				bool found = (current->getData() == data) ? true : false;
				if (found == true) {
					trailCurrent->setLink(current->getLink());
					delete current;
					current = NULL;
					count--;
					return;
				}
				trailCurrent = current;
				current = current->getLink();
			}
			return;
		}
	}

	int getFirst() {
		return first->getData();
	}

	int length() {
		return count;
	}

	void print() {
		SinglyLinkedListNode* current = first;
		while (current != NULL) {
			cout << current->getData() << " ";
			current = current->getLink();
		}
		cout << endl;
	}

	void destroyList() {
		SinglyLinkedListNode* current = first;
		while (current != NULL) {
			SinglyLinkedListNode* temp = current;
			current = current->getLink();
			delete temp;
			temp = NULL;
		}
		first = NULL;
		count = 0;
	}

	~SinglyLinkedList() {
		destroyList();
	}
private:
	SinglyLinkedListNode* first;
	int count;
};

#endif 