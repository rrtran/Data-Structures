#include "Stack.h"

Stack::Stack() {
	capacity = 256;
}

Stack::Stack(int capacity) {
	this->capacity = capacity;
}

void Stack::push(int e) {
	if (list.length() == capacity) {
		try {
			throw FullStackException();
		}
		catch (FullStackException& e) {
			cerr << e.what() << endl;
			system("Pause");
			exit(0);
		}
	}
	else {
		list.insertFront(e);
	}
}

void Stack::pop() {
	if (list.length() == 0) {
		cerr << "Stack is empty!" << endl;
		return;
	}
	else {
		list.deleteNode(list.getFirst());
	}
}

bool Stack::empty() {
	if (list.length() == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool Stack::full() {
	if (list.length() == capacity) {
		return true;
	}
	else {
		return false;
	}
}

int Stack::top() {
	if (list.length() == 0) {
		try {
			throw EmptyStackException();
		}
		catch (EmptyStackException& e) {
			cerr << e.what() << endl;
			system("pause");
			exit(0);
		}
	}
	else {
		return list.getFirst();
	}
}

int Stack::size() {
	return list.length();
}

void Stack::destroyStack() {
	list.destroyList();
}

void Stack::initializeStack() {
	destroyStack();
}

Stack::~Stack() {
	destroyStack();
}