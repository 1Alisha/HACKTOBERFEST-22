#include <iostream>
using namespace std;

class TwoStack {
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    TwoStack(int size) {
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void push1(int ele) {
        if (top2 - top1 > 1) {
            top1++;
            arr[top1] = ele;
        }
        else {
            cout << "Stack OverFlow" << endl;
        }
    }

    void push2(int ele) {
        if (top2 - top1 > 1) {
            top2--;
            arr[top2] = ele;
        }
        else {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop1() {
        if (top1 >= 0) {
            top1--;
        }
        else {
            cout << "Stack UnderFlow" << endl;
        }
    }

    void pop2() {
        if (top2 < size) {
            top2++;
        }
        else {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek1() {
        if (top1 >= 0) {
            return arr[top1];
        }
        else {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    int peek2() {
        if (top2 < size) {
            return arr[top2];
        }
        else {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        if (top1 == -1 && top2 == size) {
            return true;
        }
        else {
            return false;
        }
    }

};

int main() {
    TwoStack s(5);
    s.push1(10);
    s.push2(20);
    s.push1(30);
    s.push2(40);
    s.pop1();
    cout << s.peek1() << endl;

}