#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

class Node {
public:
	Node() : data(0), link(nullptr) {}
	Node(int data) : data(data), link(nullptr) {}
	int getData() { return data; }
	Node* getLink() { return link; }
	void setData(int data) { this->data = data; }
	void setLink(Node* link) { this->link = link; }
	~Node() { link = nullptr; }
private:
	int data;
	Node* link;
};

class SinglyLinkedList {
public:
	SinglyLinkedList() {
		first = nullptr;
		last = nullptr;
		size = 0;
	}

	void insertFront(int data) {
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

	void insertBack(int data) {
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

	void deleteNode(int data) {
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

	int getFirst() {
		return first->getData();
	}

	int length() {
		return size;
	}

	void destroyList() {
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

	~SinglyLinkedList() {
		destroyList();
	}
private:
	Node* first;
	Node* last;
	int size;
};

#endif