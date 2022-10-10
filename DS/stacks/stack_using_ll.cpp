#include <iostream>
using namespace std;

class Node {
   public:
   int data;
   Node* next;
};
 
Node* top;
void push(int data) {
   Node* temp = new Node();
   if (!temp) {
      cout << "Stack Overflow" << '\n';
      return;
   }
   temp->data = data;
   temp->next = top;
   top = temp;
}

int isEmpty() {
   return top == NULL;
}

int peek() {
   if (!isEmpty())
      return top->data;
   else {
      return -1;
   }
}

void pop() {
   Node* temp;

   if (top == NULL) {
      cout << "\nStack Underflow" << endl;
      exit(1);
   }
   else {
      temp = top;
      top = top->next;
      free(temp);
   }
}

void display() {
   Node* temp;
   if (top == NULL) {
      cout << "\nStack Underflow";
      exit(1);
   }
   else {
      temp = top;
      while (temp != NULL) {
         cout << temp->data << " ";
         temp = temp->next;
      }
   }
}

int main() {
   push(11);
   push(22);
   push(33);
   push(44);
   display();
   cout << "\nTop element is " << peek() << endl;
   pop();
   pop();
   display();
   cout << "\nTop element is " << peek() << endl;
}