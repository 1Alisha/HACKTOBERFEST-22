#include<iostream>
using namespace std;
//this is the function.. which will be of type.. <return data type> <function name>(<arguments>) {<code here>}
bool check(int n)
{
    if(n%2==0)
        return true;
    return false;
}
int main()
{
    //here we will write a function to check if given integer is odd or even.. 
    int n;
    cin>>n; //cin is like scanf in c language which is used to take input from console.

    bool res = check(n);
    if(res == true)
        cout<<"is even \n";
    else    
        cout<<"is odd\n";
    return 0;
}