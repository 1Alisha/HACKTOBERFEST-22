#include <bits/stdc++.h>
using namespace std;
 
// Driver's code
int main()
{
    // initializing vector of integers
    int n;
    cin>>n;
    vector<int> arr ;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    int search_element;
    cin>>search_element;
    
 
    // using binary_search to check if 15 exists
    if (binary_search(arr.begin(), arr.end(), search_element))
        cout << search_element<<" exists in vector";
    else
        cout << search_element<<" does not exist";
 
    cout << endl;
 
    cout << endl;
}
