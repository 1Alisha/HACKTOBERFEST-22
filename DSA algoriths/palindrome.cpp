#include<iostream>
#include<cstring>
using namespace std;


bool palindrome(string s,int i,int j){
    //base case
    cout<<s[i]<<" "<<s[j]<<endl;
    if(i>j){
        return true;
    }
    if(s[i] != s[j]){
        return false;
    }
    else{
        return palindrome(s,++i,--j);
    }
}

int main(){
    string s="book";
    int i=0;int j=s.length()-1;
    bool ans=palindrome(s,i,j);
    if(ans){
        printf("True");
    }
    else{
        cout<<"False";
    }
}
