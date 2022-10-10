#include <iostream>
using namespace std;

class Queue {
    int* arr;
    int qfront;
    int rear;
    int size;
    public:
    Queue(int size) {
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }
    bool isEmpty() {
        if (qfront == rear) {
            return true;
        }
        return false;
    }
    void enqueue(int data) {
        if (rear == size) {
            cout << "Queue Overflow" << endl;
        }
        else {
            arr[rear] = data;
            rear++;
        }
    }
    int dequeue() {
        if (qfront == rear) {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        else {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront==rear) {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }
    int front() {
        if (qfront == rear) {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        else {
            return arr[qfront];
        }
    }
    void display() {
        if (qfront == rear) {
            cout << "Queue Underflow" << endl;
        }
        else {
            for (int i=qfront;i<rear;i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    int ele;
    cout << q.dequeue() << endl;
    q.display();
}