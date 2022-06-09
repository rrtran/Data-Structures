#include "DoublyLinkedListNode.h"

DoublyLinkedListNode::DoublyLinkedListNode() : data(0), previousLink(NULL), nextLink(NULL) 
{
}

DoublyLinkedListNode::DoublyLinkedListNode(int data, DoublyLinkedListNode* previous, DoublyLinkedListNode* next) : data(data), previousLink(previous), nextLink(next) 
{
}

DoublyLinkedListNode* DoublyLinkedListNode::getPreviousLink() 
{ 
	return previousLink; 
}

DoublyLinkedListNode* DoublyLinkedListNode::getNextLink() 
{ 
	return nextLink; 
}

const int DoublyLinkedListNode::getData() const 
{ 
	return data; 
}

void DoublyLinkedListNode::setData(const int& data) 
{ 
	this->data = data; 
}

void DoublyLinkedListNode::setNextLink(DoublyLinkedListNode* link) 
{ 
	nextLink = link; 
}

void DoublyLinkedListNode::setPreviousLink(DoublyLinkedListNode* link) 
{ 
	previousLink = link; 
}

DoublyLinkedListNode::~DoublyLinkedListNode() 
{
	previousLink = NULL;
	nextLink = NULL;
}