#include "Queue.h"

Queue::Queue() 
{
}

void Queue::enqueue(int e)
{
	list.insertBack(e);
}

void Queue::dequeue()
{
	list.deleteNode(list.getFirst());
}

bool Queue::empty()
{
	if (list.length() == 0) {
		return true;
	}
	else {
		return false;
	}
}

int Queue::front()
{
	return list.getFirst();
}

int Queue::size()
{
	return list.length();
}

Queue::~Queue()
{
}