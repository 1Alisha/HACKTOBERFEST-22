#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        if (next != NULL) {
            delete next;
            next = NULL;
        }
    }
};

int len(Node* head) {
    int len = 0;
    Node* temp = head;

    while (temp!=NULL) {
        len++;
        temp = temp->next;
    }
    cout << endl;
    return len;
}

void insertAtHead(Node* &head,int d) {
    if (head == NULL) {
        Node* temp = new Node(d);
        head = temp;
    }
    else {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* tail,int d) {
    if (tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
    }
    else {
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* tail,Node* head,int pos,int d) {
    if (pos == 1) {
        insertAtHead(head,d);
        return;
    }

    Node* ptr = head;
    int cnt = 1;

    while (cnt < pos-1) {
        ptr = ptr->next;
        cnt++;
    }

    if (ptr->next == NULL) {
        insertAtTail(tail,d);
        return;
    }

    Node * temp = new Node(d);
    temp->next = ptr->next;
    ptr->next->prev = temp;
    temp->prev = ptr; 
    ptr->next = temp;
}

void print(Node* &head) {
    Node* temp = head;

    while (temp!=NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtHead(head,11);
    print(head);
    insertAtHead(head,13);
    print(head);
    insertAtHead(head,8);
    print(head);

    // insertAtTail(tail,20);
    // print(head);

    insertAtPosition(tail,head,1,25);
    print(head);
    cout << "Length of DLL" << len(head) << endl;

}