#include <iostream>
#include "SinglyLinkedList.h"
#include "Queue.h"
#include "Stack.h"

using namespace std;

int main() {
	Stack stack;
	Queue queue;
	for (int i = 0; i < 256; i++) {
		stack.push(i);
		queue.enqueue(i);
	}
	
	while (stack.empty() == false) {
		cout << stack.top() << " ";
		stack.pop();
	}
	cout << endl;

	while (queue.empty() == false) {
		cout << queue.front() << " ";
		queue.dequeue();
	}
	cout << endl;
}