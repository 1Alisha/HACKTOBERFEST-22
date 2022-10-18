#include <iostream>
using namespace std;
 
class Node {
public:
    int val;
    Node* next;
};
 
class NodeOperation {
public:
    // Function to add a new node
    void pushNode(class Node** head_ref, int data_val)
    {
 
        // Allocate new node
        class Node* new_node = new Node();
 
        // Put data in the new node
        new_node->val = data_val;
 
        // Link the new node to the old list
        new_node->next = *head_ref;
 
        // move the head to the new node
        *head_ref = new_node;
    }
 
    // A utility function to print a given linked list
    void displayNode(class Node* head)
    {
        while (head != NULL) {
            cout << head->val << "->";
            head = head->next;
        }
        cout << "NULL" << endl;
    }
 
    /* Utility Function to find length of linked list */
    int getLen(class Node* head)
    {
        int len = 0;
        class Node* temp = head;
        while (temp) {
            len++;
            temp = temp->next;
        }
        return len;
    }
 
    void displayMiddle(class Node* head)
    {
 
        if (head) {
            // find length of list
            int len = getLen(head);
            class Node* temp = head;
 
            // trvaerse thee list till we reached half of length
            int midIdx = len / 2;
            while (midIdx--) {
                temp = temp->next;
            }
            // temp will be store the middle element val
            cout << "The middle element is [" << temp->val<< "]" << endl;
        }
    }
};
 
// Driver Code
int main()
{
    class Node* head = NULL;
    class NodeOperation* temp = new NodeOperation();
    for (int i = 5; i > 0; i--) {
        temp->pushNode(&head, i);
        temp->displayNode(head);
        temp->displayMiddle(head);
    }
    return 0;
}
