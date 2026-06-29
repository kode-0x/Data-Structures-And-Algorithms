// (Singly) Linked List-Based Stack Implementation


class Stack {
private:
    struct Node {
        int data;
        Node* next;

        explicit Node(int value)
            : data(value), next(nullptr) {}
    };

    Node* topNode;
    int capacity;
    int currentSize;

public:
    // Constructor
    explicit Stack(int size)
        : topNode(nullptr),
          capacity(size),
          currentSize(0) {}

    // Destructor
    ~Stack() {
        while (topNode) {
            Node* temp = topNode;
            topNode = topNode->next;
            delete temp;
        }
    }

    // Push
    bool push(int value) {
        if (currentSize >= capacity) {
            return false; // Stack Overflow
        }

        Node* newNode = new Node(value);
        newNode->next = topNode;
        topNode = newNode;

        ++currentSize;
        return true;
    }

    // Pop
    int pop() {
        if (topNode == nullptr) {
            return -1; // Stack Underflow
        }

        Node* temp = topNode;
        int value = temp->data;

        topNode = topNode->next;
        delete temp;

        --currentSize;
        return value;
    }

    // Top
    int top() const {
        if (topNode == nullptr) {
            return -1;
        }

        return topNode->data;
    }

    // Peek (0 = Top Element)
    int peek(int index) const {
        if (index < 0 || index >= currentSize) {
            return -1;
        }

        Node* current = topNode;

        while (index--) {
            current = current->next;
        }

        return current->data;
    }

    // Empty
    bool isEmpty() const {
        return topNode == nullptr;
    }

    // Full
    bool isFull() const {
        return currentSize >= capacity;
    }
};