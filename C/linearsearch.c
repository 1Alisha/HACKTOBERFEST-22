#include<stdio.h>
int linearsearch(int a[100],int n,int key){
    int i,pos,found=-1;
    for(i=0;i<n;i++){
        if(a[i]==key){
            found=i;break;
        }
    }
    return found;
}
int main(){
    int a[100],i,n,key,p;
    printf("enter no of elements in the array: ");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&key);
    p=linearsearch(a,n,key);
    if (p==-1)
    printf("not found");
    else printf("found at position %d",p+1);
    
}