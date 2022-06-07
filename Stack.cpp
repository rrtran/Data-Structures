#include "Stack.h"

Stack::Stack() 
{
}

void Stack::push(int e) 
{
	list.insertFront(e);
}

void Stack::pop() 
{
	list.deleteNode(list.getFirst());
}

bool Stack::empty() 
{
	if (list.length() == 0) {
		return true;
	}
	else {
		return false;
	}
}

int Stack::top() 
{
	return list.getFirst();
}

int Stack::size() 
{
	return list.length();
}

Stack::~Stack() 
{
}