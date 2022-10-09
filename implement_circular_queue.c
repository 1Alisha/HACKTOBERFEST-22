#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int rear;
    int front;
    int *arr;
};
int enqueue(struct queue *q){
    if((q->front==0&&q->rear==q->size-1)||(q->rear==(q->front-1)%(q->size-1))){
        printf("Queue is full\n");
        return -1;
    }
    else if(q->front==-1){
        q->front=q->rear=0;
    }
    else if(q->rear==q->size-1){
        q->rear=0;
    }
    else{
        q->rear=q->rear+1;
    }
    int val;
    printf("Enter data for enqueue:");
    scanf("%d",&val);
    q->arr[q->rear]=val;
}
int dequeue(struct queue *q){
    if(q->front==-1){
        printf("Queue is empty\n");
        return -1;
    }
    int del=q->arr[q->front];
    if(q->front==q->rear){
        q->front=q->rear=-1;
    }
    else if(q->front==q->size-1){
        q->front==0;
    }
    else{
        q->front++;
    }
    return del;
}
void display(struct queue *q){
    int i;
    i=q->front;
    printf("Elements in queue:");
    do{
        printf("\nElement at index[%d]:%d",i,q->arr[i]);
        if(i==q->rear){
            break;
        }
        i=(i+1)%q->size;
    }while(i!=q->front);
    printf("\n");
}
int main(){
    struct queue *q;
    q->front=q->rear=-1;
    q->size=3;
    q->arr=(int *) malloc(q->size * sizeof(int));
    int choice,del;
    printf("\n\t QUEUE OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.ENQUEUE\n\t 2.DEQUEUE\n\t 3.DISPLAY\n\t 4.EXIT\n");
    do{
        printf("Enter choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue(q);
            break;
        case 2:
            del=dequeue(q);
            printf("Deleted element:%d\n",del);
            break;
        case 3:
            display(q);
            break;
        case 4:
            printf("\nEXIT POINT");
            break;
        
        default:
            printf("\n Please Enter a Valid Choice(1/2/3/4)");
        }
    }while(choice!=4);
    return 0;
}