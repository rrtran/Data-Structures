#ifndef QUEUE_H
#define QUEUE_H

#include "SinglyLinkedList.h"

class Queue {
public:
	Queue();
	void enqueue(int e);
	void dequeue();
	bool empty();
	int front();
	int size();
	~Queue();
private:
	SinglyLinkedList list;
};

#endif