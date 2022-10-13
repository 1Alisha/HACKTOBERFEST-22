#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &v, int p, int q, int r)
{
    // Size of those divided arrays
    int size1 = q - p + 1;
    int size2 = r - q;

    // Declaring two arrays of desired sizes having the above lengths
    vector<int> L(size1, 0), M(size2, 0);
    //            ^      ^
    //            |      |
    // L(size of array, element to be filled)
    // Here 0 is filled in both the arrays using above syntax

    // Filling those arrays with the two divided arrays

    for (int i = 0; i < size1; i++)
    {
        L[i] = v[p + i]; // p is first element of divided array #think!!!
    }

    for (int i = 0; i < size2; i++)
    {
        M[i] = v[q + 1 + i]; // similarly q + 1 is the first element of other piece of array
    }


    // Using three variables for traversing in L , M and Assigning sorted elements back to V
    int i = 0, j = 0, k = p; // Again here we will have to start assigning elements from k = p {First element}

    // Adding elements in sorted manner until one of them is completely added
    while (i < size1 && j < size2)
    {
        if (L[i] <= M[j])
        {
            v[k] = L[i];
            k++;
            i++;
        }
        else
        {
            v[k] = M[j];
            j++;
            k++;
        }
    }


    // Adding remainning elements to V  {Either this will remain}
    while (i < size1)
    {
        v[k] = L[i];
        i++;
        k++;
    }

    // Adding remainning elements to V  {Or this will remain}
    while (j < size2)
    {
        v[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &v, int l, int r)
{
    if (l < r)
    {

        int m = (l + r) / 2;
        
        // Dividing array
        //First array === First_Element to Mid_Element  
        mergeSort(v, l, m);

        //Second Array === Next to Mid_element to Last_Element
        mergeSort(v, m + 1, r);

        // Calling merge function to arrange the divided pieces in sorted form 
        merge(v, l, m, r);
    }
}

int main()
{
    vector<int> a = {10, 9, 8, 7, 6};

    mergeSort(a, 0, a.size() - 1);

    for (auto x : a)
    {
        cout << x << " ";
    }
}