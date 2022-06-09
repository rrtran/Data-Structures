#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"
#include "Stack.h"

int main() {
	SinglyLinkedList list;
	for (int i = 0; i < 256; i++) {
		list.insertFront(i);
	}

	list.print();

	DoublyLinkedList list2;
	DoublyLinkedList list3;
	for (int i = 0; i < 256; i++) {
		list2.insertFront(i);
		list3.insertBack(i);
	}

	list2.print();
	list3.print();

	for (int i = 0; i < 256; i++) {
		list2.deleteNode(i);
		list3.deleteNode(i);
	}

	list2.print();
	list3.print();

	for (int i = 0; i < 256; i++) {
		list2.insertFront(i);
		list3.insertBack(i);
	}

	list2.print();
	list3.print();

	system("cls");
	Stack stack;
	for (int i = 0; i < 256; i++) {
		stack.push(i);
	}
	cout << stack.size() << endl;
	stack.initializeStack();
	cout << stack.size() << endl;
	cout << "Pushing one more number" << endl;
	stack.push(1);
	cout << stack.size();

}