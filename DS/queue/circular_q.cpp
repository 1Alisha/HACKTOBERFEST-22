#include <iostream>
using namespace std;

class Cqueue {
    int *arr;
    int qfront;
    int rear;
    int size;
    public:
    Cqueue(int n) {
        size = n;
        arr = new int[size];
        qfront = -1;
        rear = -1;
    }

    void enqueue(int data) {
        if ((qfront == 0 && rear == size-1) || (rear == (qfront-1)%(size-1))) {
            cout << "Queue Full" << '\n';
            return;
        }
        else if (qfront == -1) {
            qfront = rear = 0;
            arr[rear] = data;
        }
        else if (rear == size-1 && qfront != 0) {
            rear = 0;
            arr[rear] = data;
        }
        else {
            rear++;
            arr[rear] = data;
        }
    }

    int dequeue() {
        if (qfront == -1) {
            cout << "Queue Empty" << '\n';
            return -1;
        }
        int ans = arr[qfront];
        arr[qfront] = -1;
        if (qfront == rear) {
            qfront = rear = -1;
        }
        else if (qfront == size-1) {
            qfront = 0;
        }
        else {
            qfront++;
        }
        return ans;
    }

    void display() {
        if (qfront == -1) {
            cout<<"Queue is empty"<<endl;
            return;
        }
        int f = qfront;
        cout<<"Queue elements are :\n";
        if (f <= rear) {
            while (f <= rear){
                cout<<arr[f]<<" ";
                f++;
            }
        } else {
            while (f <= size - 1) {
                cout<<arr[f]<<" ";
                f++;
            }
            f = 0;
            while (f <= rear) {
                cout<<arr[f]<<" ";
                f++;
            }
        }
    cout<<endl;
    }
};

int main() {
    Cqueue cq(5);
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    cq.dequeue();
    cq.display();
}