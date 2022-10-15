#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

node* a=NULL;
node* b=NULL;
node* res=NULL;

node* sortedMerge(struct node*a, struct node* b ){
    
    node* result=NULL;
    
    //base case
    if(a==NULL){
        return b;
    }
    else if(b==NULL){
        return a;
    }

    //decide the smaller data and recur
    if(a->data<=b->data){
        result=a;
        result->next=sortedMerge(a->next,b);
    }
    else{
        result=b;
        result->next=sortedMerge(a,b->next);
    }
    return result;
}

void display(node *result){   //to print the resultant linked list
    node* temp=result;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void push(node** head, int data) //for pushing data into the linked list
{ 
    node* newnode = new node();
    newnode->data = data; 
    newnode->next = (*head); 
    (*head) = newnode; 
} 

int main(){
    push(&a, 5); 
    push(&a, 3); 
    push(&a, 1); 
  
    
    cout<<"First linked list: ";
    display(a);
  
    push(&b, 6); 
    push(&b, 4); 
    push(&b, 2); 
    cout<<"Second linked list: ";
    display(b);

    res=sortedMerge(a,b);

    cout<<"Sorted Merge linked list: ";
    display(res);
}
