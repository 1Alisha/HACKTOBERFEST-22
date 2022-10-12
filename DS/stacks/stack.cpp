#include <iostream>
using namespace std;

class Stack {
    public:
    int *arr;
    int top;
    int size;

    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int ele) {
        if (top+1 < size) {
            top++;
            arr[top] = ele;
        }
        else {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        }
        else {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        }
        else {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        if (top == -1) {
            return true;
        }
        else {
            return false;
        }
    }

};

int main() {
    Stack s(5);
    s.push(10);
    s.pop();
    s.pop();
    cout << s.peek() << endl;

}