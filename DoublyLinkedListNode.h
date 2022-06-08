#ifndef DOUBLY_LINKED_LIST_NODE_H
#define DOUBLY_LINKED_LIST_NODE_H

#include <string>

class DoublyLinkedListNode {
public:
	DoublyLinkedListNode() : data(0), previousLink(NULL), nextLink(NULL) {}
	DoublyLinkedListNode(int data, DoublyLinkedListNode* previous, DoublyLinkedListNode* next) : data(data), previousLink(previous), nextLink(next) {}
	DoublyLinkedListNode* getPreviousLink() { return previousLink; }
	DoublyLinkedListNode* getNextLink() { return nextLink; }
	const int getData() const { return data; }
	void setData(const int& data) { this->data = data; }
	void setNextLink(DoublyLinkedListNode* link) { nextLink = link; }
	void setPreviousLink(DoublyLinkedListNode* link) { previousLink = link; }
	~DoublyLinkedListNode() {
		previousLink = NULL;
		nextLink = NULL;
	}
private:
	int data;
	DoublyLinkedListNode* nextLink;
	DoublyLinkedListNode* previousLink;
};

#endif