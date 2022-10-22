#include<stdio.h>
int bubble(int a[100],int n){
    int temp,i,j;
    for (i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){
    int a[100],i,n,p;
    printf("enter no of elements in the array: ");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bubble(a,n);
    printf("The sorted array is: ");
    for(i=0;i<n;i++){
        printf("%3d",a[i]);
    }
}
