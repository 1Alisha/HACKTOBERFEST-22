#include <iostream>
#include <string>

using namespace std;
#include <string>
using namespace std;

int returnPermutations(string input, string output[]){
   	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
     int len = input.length();
    if(len==0) return 0;
    if(len==1)
    {
        output[0] = input;
        return 1;
    }
    int count, sum=0;
    for(int i=0; i<len; i++)
    {
        count = returnPermutations(input.substr(0,i)+input.substr(i+1),output+sum);
        for(int j=0; j<count; j++)
            output[sum+j] = input.substr(i,1) + output[sum+j];
        sum += count;
    }
    return sum;
}
int main(){
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
