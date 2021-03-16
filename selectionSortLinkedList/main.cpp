#include <iostream>

using namespace std;

struct Node {

	int value;
	Node* next;

	Node() : next(nullptr) {}
	Node(int value) : next(nullptr), value(value) {}

};

class List {

	public:	
		Node* head;
	
		void selectionSort();
		void display();

		List() : head(nullptr) {}
		List(Node* head) : head(head) {}

};

int main() {

	Node* node1 = new Node(1);
	Node* node2 = new Node(2);
	Node* node3 = new Node(3);
	Node* node4 = new Node(4);
	Node* node5 = new Node(5);

	node1->next = node4;
	node4->next = node2;
	node2->next = node5;
	node5->next = node3;

	List newList(node1);

	newList.selectionSort();

	newList.display();

}

void List::display() {

	for (Node* curr = this->head; curr != nullptr; curr = curr->next) {

		cout << curr->value << " ";
	}

	cout << endl;

}

void List::selectionSort() {

	for (Node* i = this->head; i->next != nullptr; i = i->next) {

		Node* min = i;

		for (Node* j = i->next; j != nullptr; j = j->next) {

			if (j->value < min->value) {

				min = j;
			}

		}

		int tmp = i->value;
		i->value = min->value;
		min->value = tmp;

	}

}
