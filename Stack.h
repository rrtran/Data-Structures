#ifndef STACK_H
#define STACK_H

#include "SinglyLinkedList.h"

class Stack {
public:
	Stack();
	void push(int e);
	void pop();
	bool empty();
	int top();
	int size();
	~Stack();
private:
	SinglyLinkedList list;
};

#endif
