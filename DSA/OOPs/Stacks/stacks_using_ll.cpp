#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        if (top == nullptr) {
            top = newNode;
        } else {
            newNode->next = top;
            top = newNode;
        }
        cout << val << " pushed into stack." << endl;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty." << endl;
        } else {
            Node* temp = top;
            top = top->next;
            cout << temp->data << " popped from stack." << endl;
            delete temp;
        }
    }

    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty." << endl;
            return -1; // Assuming -1 represents an empty stack
        } else {
            return top->data;
        }
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    Stack myStack;
    myStack.push(5);
    myStack.push(10);
    myStack.push(15);

    cout << "Top element: " << myStack.peek() << endl;
    
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop(); // Trying to pop from an empty stack

    cout << "Is stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
