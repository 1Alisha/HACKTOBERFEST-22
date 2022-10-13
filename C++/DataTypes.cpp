#include<iostream>
using namespace std;
int main()
{
    int n=1; //integer
    char ch = 'A'; //character
    string str = "hacktober"; //string or set of characters
    float f = 3.5; 
    double d = 9.2345223; //handles double the size of float
    bool flag = false; //takes either true or false 
    //sizes of all these data types are diff
    cout<<"size of int is : "<<sizeof(n)<<"\n";
    cout<<"size of char is : "<<sizeof(ch)<<"\n";
    cout<<"size of string is : "<<sizeof(str)<<"\n";
    cout<<"size of float is : "<<sizeof(f)<<"\n";
    cout<<"size of double is : "<<sizeof(d)<<"\n";
    cout<<"size of bool is : "<<sizeof(flag)<<"\n";
}