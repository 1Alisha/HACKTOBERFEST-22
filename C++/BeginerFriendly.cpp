#include<iostream>
using namespace std;

int main()
{
    /*This is a C++ basic learning programme to learn the basics
    This programme will help to learn 
        Printing a line
        variables
        user input 
        if else statement
        loops
    */

//    Printing a line in C++ 
        cout<<"cout is used to print a line in C++ programme"<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    // Variables in C++
    // int, float, char etc are variables

    int a=1; // this is an integer variable
    float b=1.1;// this is a float variable
    char c='A'; // this is a character variable

    cout<<a<<" this is the value of integer variable"<<endl;
    cout<<b<<" this is the value of float variable"<<endl;
    cout<<c<<" this is the value of character variable"<<endl;

    cout<<"------------------------------------------------------------------------------"<<endl;
    // Userinput in C++

    // we can use "cin>>" sign to take userinput in C++ programme

    cout<<"Enter the new value of integer variable"<<endl;
    cin>>a;
    cout<<"Enter the new value of float variable"<<endl;
    cin>>b;
    cout<<"Enter the new value of charecter variable"<<endl;
    cin>>c;

    cout<<"Printing the new value of the previous variables which has been taken by the user now"<<endl;
    cout<<a<<" this is the value of integer variable"<<endl;
    cout<<b<<" this is the value of float variable"<<endl;
    cout<<c<<" this is the value of character variable"<<endl;

    cout<<"------------------------------------------------------------------------------"<<endl;
    // if else statement in C++ programme
    /*If else statement is used to check conditions*/

    cout<<"Checking the condition of the integer variable"<<endl;
    if (a>10) //if the value of a will be greater than 10, then the programme will run the code of this condition
    {
        cout<<"The user has provided the input greater than 10"<<endl;
    }
    else{ //else the programme will automatically run this condition
        cout<<"The user has entered the number less than 10"<<endl;
    }

    cout<<"------------------------------------------------------------------------------"<<endl;
    // Loops in C++ 
    // Loops is used to iteration
    // Types of loops in C++: While, Do while, For

    cout<<"Printing 1 to 5 using While loops"<<endl;
    int i=1;
    while (i<=5)
    {
        cout<<i<<endl;
        i=i+1;
    }

    cout<<"Printing 5 to 10 using do while loops"<<endl;
    int j=5;
    do
    {
        cout<<j<<endl;
        j=j+1;
    } while (j<=10);
    cout<<"Printing 10 to 15 using for loops"<<endl;

    for (int k = 10; k < 15; k++)
    {
        cout<<k<<endl;
    }
    
    
    return 0;
}
