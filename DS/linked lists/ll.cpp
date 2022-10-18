#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "memory freed for node containing data " << value << endl;
    }
};

void insertAtHead(Node* &head,int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail,Node* &head,int pos,int d) {
    Node* temp = new Node(d);
    if (pos == 1) {
        insertAtHead(head,d);
        return;
    }
    int cnt = 1;
    Node* ptr = head;
    while (cnt < pos-1) {
        ptr = ptr->next;
        cnt++;
    }

    if (temp->next == NULL) {
        insertAtTail(tail,d);
        return;
    }

    temp->next = ptr->next;
    ptr->next = temp;
    
}

void deleteNode(int pos, Node* &head, Node* &tail) {
    if (pos == 1) {
        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }

    else {
        Node* curr = head;
        Node* prev = NULL;
        
        int cnt = 1;
        while (cnt<pos) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        if (prev->next == NULL) {
            tail = prev;
        }
        
    }
}   

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next; 
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node* head = node1;
    Node* tail = node1;
    print(head); 
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);
    insertAtPosition(tail,head,4,45);
    print(head);

    deleteNode(4,head,tail);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

}