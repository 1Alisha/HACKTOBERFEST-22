#include<iostream>
using namespace std;

int Linear_search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++){
        if(arr[i]==key)
            return i;
    }
    return-1;
}

int main()
{
int arr1[5]={4,5,6,7,8};
int index=Linear_search(arr1,5,8);
cout<<"Index is "<<index;
   return 0;
}


