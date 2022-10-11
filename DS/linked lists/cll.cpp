#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

void insertNode(Node* &tail, int element, int d) {
    if (tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else {
        Node* curr = tail;

        while (curr->data != element){
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail) {
    Node* temp = tail;
    do {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main() {
    Node* tail = NULL;

    insertNode(tail,0,3);
    print(tail);
    insertNode(tail,3,6);
    print(tail);
    insertNode(tail,6,7);
    print(tail);
    insertNode(tail,3,4);
    print(tail);
    insertNode(tail,7,2); 
    print(tail);
}