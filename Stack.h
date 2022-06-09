#ifndef STACK_H
#define STACK_H

#include <exception>
#include "DoublyLinkedList.h"

class EmptyStackException : public exception {
public:
	EmptyStackException() {}

	const char* what() const throw() {
		return "Stack is empty!";
	}
};

class FullStackException : public exception {
public:
	FullStackException() {}

	const char* what() const throw() {
		return "Stack is full!";
	}
};

class Stack {
public:
	Stack();
	Stack(int capacity);
	void push(int e);
	void pop();
	bool empty();
	bool full();
	int top();
	int size();
	void destroyStack();
	void initializeStack();
	~Stack();
private:
	DoublyLinkedList list;
	int capacity;
};

#endif
