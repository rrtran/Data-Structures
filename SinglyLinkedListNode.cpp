#include "SinglyLinkedListNode.h"

SinglyLinkedListNode::SinglyLinkedListNode() : data(0), link(NULL) 
{
}

SinglyLinkedListNode::SinglyLinkedListNode(int data, SinglyLinkedListNode* link) : data(data), link(link) 
{
}

SinglyLinkedListNode* SinglyLinkedListNode::getLink() const 
{ 
	return link; 
}

const int SinglyLinkedListNode::getData() const 
{ 
	return data; 
}

void SinglyLinkedListNode::setData(const int& data) 
{ 
	this->data = data; 
}

void SinglyLinkedListNode::setLink(SinglyLinkedListNode* link) 
{ 
	this->link = link; 
}

SinglyLinkedListNode::~SinglyLinkedListNode() 
{ 
	link = NULL; 
}