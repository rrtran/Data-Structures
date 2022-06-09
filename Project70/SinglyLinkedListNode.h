#ifndef SINGLY_LINKED_LIST_NODE_H
#define SINGLY_LINKED_LIST_NODE_H

#include <string>

class SinglyLinkedListNode {
public:
	SinglyLinkedListNode();
	SinglyLinkedListNode(int data, SinglyLinkedListNode* link);
	SinglyLinkedListNode* getLink() const;
	const int getData() const;
	void setData(const int& data);
	void setLink(SinglyLinkedListNode* link);
	~SinglyLinkedListNode();
private:
	int data;
	SinglyLinkedListNode* link;
};

#endif