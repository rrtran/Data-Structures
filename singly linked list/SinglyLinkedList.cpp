#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList() {
	first = nullptr;
	last = nullptr;
	size = 0;
}

void SinglyLinkedList::insertFront(int data) {
	if (size == 0) {
		Node* node = new Node(data);
		first = node;
		last = node;
		size++;
		return;
	}
	else {
		Node* node = new Node(data);
		node->setLink(first);
		first = node;
		size++;
		return;
	}
}

void SinglyLinkedList::insertBack(int data) {
	if (size == 0) {
		Node* node = new Node(data);
		first = node;
		last = node;
		size++;
		return;
	}
	else {
		Node* node = new Node(data);
		last->setLink(node);
		last = node;
		size++;
		return;
	}
}

void SinglyLinkedList::deleteNode(int data) {
	if (size == 0) {
		return;
	}
	else {
		Node* trailCurrent = nullptr;
		Node* current = first;
		while (current != nullptr) {
			if (current->getData() == data) {
				if (current == first) {
					first = current->getLink();
					delete current;
					current = nullptr;
					size--;
					return;
				}
				else if (current == last) {
					last = trailCurrent;
					trailCurrent->setLink(current->getLink());
					delete current;
					current = nullptr;
					size--;
					return;
				}
				else {
					trailCurrent->setLink(current->getLink());
					delete current;
					current = nullptr;
					size--;
					return;
				}
			}
			trailCurrent = current;
			current = current->getLink();
		}
	}
}

int SinglyLinkedList::getFirst() {
	return first->getData();
}

int SinglyLinkedList::length() {
	return size;
}

void SinglyLinkedList::destroyList() {
	Node* current = first;
	while (current != nullptr) {
		Node* temp = current;
		current = current->getLink();
		delete temp;
		temp = nullptr;
	}
	first = nullptr;
	last = nullptr;
	size = 0;
}

SinglyLinkedList::~SinglyLinkedList() {
	destroyList();
}