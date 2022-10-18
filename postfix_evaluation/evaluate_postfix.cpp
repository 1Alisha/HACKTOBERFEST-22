#include<bits/stdc++.h>
using namespace std;

int Operand(char s){
    if(s >= '0' && s <= '9')
        return 1;  //character is an operand
        return -1;  //not an operand
}
int Operator(char s){
    if(s == '+'|| s == '-'|| s == '*'|| s == '/' || s == '^')
        return 1;  //character is an operator
    return -1;   //not an operator
}
float Numscan(char s){
    int val;
    val = s;
    return float(val-'0');//return float from character
}

float operations(int a, int b, char operat){
//Perform operation
    if(operat == '+')
        return b+a;
    else if(operat == '-')
        return b-a;
    else if(operat == '*')
        return b*a;
    else if(operat == '/')
        return b/a;
    else if(operat == '^')
        return pow(b,a); //find b^a
    else
        return INT_MIN; //return negative infinity
}
float postfixEvaluation(string postfix){
    int a, b;
    stack<float> stk;
    string::iterator it;
    for(it=postfix.begin(); it!=postfix.end(); it++){
        //read elements and perform postfix evaluation
        if(Operator(*it) != -1){
            a = stk.top();
            stk.pop();
            b = stk.top();
            stk.pop();
            stk.push(operations(a, b, *it));
        }else if(Operand(*it) > 0){
            stk.push(Numscan(*it));
        }
    }
    return stk.top();
}
main(){
    string post;
    cin>>post;
    cout <<postfixEvaluation(post);
}