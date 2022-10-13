//here in this we will find factorial of a number
// so 5! would be 5*4*3*2*1
#include<iostream>
using namespace std;
int fact(int num)
{
    if(num <= 1) // this is the base case which tells when the recursion should stop.
        return 1;
    return num * fact(num-1); // here it will return num and wait till it gets value of fact(num-1) like this the recusion goes on.. 
}
int main()
{
    int num;
    cout<<"enter the num : ";
    cin>>num;
    cout<<"factorial of "<<num <<" is "<<fact(num);
}