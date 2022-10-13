#include<stdio.h>
int main()
{
    int i,j,max,min ;
    int a[6];
    printf("enter an array\n");
    for(i=0;i<=5;i++)
    {
    scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(j=0;j<=5;j++)
    {
        if(a[j]>max)
        max=a[j];
    }
    {
        if(a[j]<min)
        min=a[j];
    }
    printf("max value is %d \n",max);
    printf("min value is %d \n",min);
    return 0;
}