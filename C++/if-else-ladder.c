// C++ program to illustrate if-else-if ladder
#include <iostream>
using namespace std;
  
int main()
{
    int i = 20;
  
    // Check if i is 10
    if (i == 10)
        cout << "i is 10";
  
    // Since i is not 10
    // Check if i is 15
    else if (i == 15)
        cout << "i is 15";
  
    // Since i is not 15
    // Check if i is 20
    else if (i == 20)
        cout << "i is 20";
  
    // If none of the above conditions is true
    // Then execute the else statement
    else
        cout << "i is not present";
  
    return 0;
}
