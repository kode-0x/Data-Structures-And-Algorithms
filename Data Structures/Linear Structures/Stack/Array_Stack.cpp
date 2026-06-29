// Array-Based Stack Implementation

class Stack {
private:
    int* stack;
    int capacity;
    int topIndex;

public:
    // Constructor
    explicit Stack(int size)
        : capacity(size), topIndex(-1) {
        stack = new int[capacity];
    }

    // Destructor
    ~Stack() {
        delete[] stack;
    }

    // Push
    bool push(int value) {
        if (topIndex >= capacity - 1) {
            return false; // Stack Overflow
        }

        stack[++topIndex] = value;
        return true;
    }

    // Pop
    int pop() {
        if (topIndex < 0) {
            return -1; // Stack Underflow
        }

        return stack[topIndex--];
    }

    // Top
    int top() const {
        if (topIndex < 0) {
            return -1;
        }

        return stack[topIndex];
    }

    // Peek (0 = Top Element)
    int peek(int index) const {
        int pos = topIndex - index;

        if (pos < 0 || pos > topIndex) {
            return -1;
        }

        return stack[pos];
    }

    // Empty
    bool isEmpty() const {
        return topIndex < 0;
    }

    // Full
    bool isFull() const {
        return topIndex >= capacity - 1;
    }
};