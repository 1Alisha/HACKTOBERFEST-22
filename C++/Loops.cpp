#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};
    //for loop
    //this consists of 3 statements separated by ;  . first is assignment next is condition statement next is increment/decrement operation
    for(int i=0; i<5; i++)
        cout<<arr[i];

    cout<<"\n";
    //while loop
    //this just takes one termination condition which it checks for every loop
    int i=0;
    while(i<5)
    {
        cout<<arr[i];
        i++;
    }

    cout<<"\n";
    i=4;
    //do while
    //here same as while but consider it as first loop is condition less.. from next loop onwards it checks condition inside while() .. 
    do {
        cout<<arr[i];
        i++;
    }while(i<5);
}