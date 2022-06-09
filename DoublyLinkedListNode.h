#ifndef DOUBLY_LINKED_LIST_NODE_H
#define DOUBLY_LINKED_LIST_NODE_H

#include <string>

class DoublyLinkedListNode {
public:
	DoublyLinkedListNode();
	DoublyLinkedListNode(int data, DoublyLinkedListNode* previous, DoublyLinkedListNode* next);
	DoublyLinkedListNode* getPreviousLink();
	DoublyLinkedListNode* getNextLink();
	const int getData() const;
	void setData(const int& data);
	void setNextLink(DoublyLinkedListNode* link);
	void setPreviousLink(DoublyLinkedListNode* link);
	~DoublyLinkedListNode();
private:
	int data;
	DoublyLinkedListNode* nextLink;
	DoublyLinkedListNode* previousLink;
};

#endif