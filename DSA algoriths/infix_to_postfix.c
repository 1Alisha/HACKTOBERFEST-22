#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int size;
    int top;
    char *arr;
};
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int stacktop(struct stack *ptr){
    return ptr->arr[ptr->top];
}
void push(struct stack *ptr,char ch){
    if(isfull(ptr)){
        printf("Stack is overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=ch;
    }
}
char pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("Stack is underflow");
        return -1;
    }
    else{
        char c;
        c=ptr->arr[ptr->top];
        ptr->top=ptr->top-1;
    return c;
    }
}
int precedence(char ch){
    if(ch=='*'||ch=='/'){
        return 3;
    }
    else if(ch=='+'||ch=='-'){
        return 2;
    }
    else{
        return 0;
    }
}
int isoperator(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
        return 1;
    }
    return 0;
}
char *infix_postfix(char *infix){
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=50;
    sp->top=-1;
    sp->arr=(char *)malloc(sp->size * sizeof(char));
    char *postfix=(char *)malloc((strlen(infix)+1) * sizeof(char));
    int i=0,j=0;
    while(infix[i]!='\0'){
        if(!isoperator(infix[i])){
            postfix[j]=infix[i];
            i++;
            j++;
        }
        else{
            if(precedence(infix[i])>precedence(stacktop(sp))){
                push(sp,infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(sp);
                j++;
            }
        }
    }
    while(!isempty(sp)){
        postfix[j]=pop(sp);
        j++;
    }
    postfix[j]='\0';
    return postfix; 
}
int main(){
    char infix[20];
    printf("Enter infix:");
    scanf("%s",&infix);
    printf("Postfix of %s is %s",infix,infix_postfix(infix));
    return 0;
}