#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

class LinkedList {
private:
    int length;
    Node* head;
    Node* tail;

public:
    // Constructor
    LinkedList(int data) {
        Node* newNode = new Node(data);
        head = tail = newNode;
        length = 1;
    }

    // Destructor
    ~LinkedList() {
        Node* temp = head;
        while (head != nullptr) {
            head = head->next;
            delete temp;
            temp = head;
        }
    }

    // Insert At The Beginning
    void prepend(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        length++;
    }

    // Insert At A Given Index
    void insert(int index, int data) {
        if (index == 0) {
            prepend(data);
            return;
        }

        if (index == length) {
            append(data);
            return;
        }

        Node* temp = head;

        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        Node* newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
        length++;
    }

    // Insert At The End
    void append(int data) {
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
        length++;
    }

    // Traversal
	void traversal() {
	    Node* temp = head;

	    while (temp != nullptr) {
	        cout << temp->data << " -> ";
	        temp = temp->next;
	    }
	    cout << "NULL" << endl;
	}
};

int main() {}