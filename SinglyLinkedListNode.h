#ifndef SINGLY_LINKED_LIST_NODE_H
#define SINGLY_LINKED_LIST_NODE_H

#include <string>

class SinglyLinkedListNode {
public:
	SinglyLinkedListNode() : data(0), link(NULL) {}
	SinglyLinkedListNode(int data, SinglyLinkedListNode* link) : data(data), link(link) {}
	SinglyLinkedListNode* getLink() const { return link; }
	const int getData() const { return data; }
	void setData(const int& data) { this->data = data; }
	void setLink(SinglyLinkedListNode* link) { this->link = link; }
	~SinglyLinkedListNode() { link = NULL; }
private:
	int data;
	SinglyLinkedListNode* link;
};

#endif