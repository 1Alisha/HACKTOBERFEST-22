#include <bits/stdc++.h>
using namespace std;

void merge(int array[],int s,int end){
    int mid=(s+end)/2;
    int len1=mid-s+1;
    int len2=end-mid;
    int a1[len1],a2[len2];
    int len=s;
    for (int i = 0; i < len1; i++)
    {
        a1[i]=array[len++];
    }
    len=mid+1;
    for (int i = 0; i < len2; i++)
    {
        a2[i]=array[len++];
    }
    int l=0,r=0,arraylen=s;
    while (l<len1 && r<len2)
    {
        if (a1[l]<a2[r])
        {
            array[arraylen++]=a1[l++];
        }
        else
        {
            array[arraylen++]=a2[r++];
        }
    }
    while (l<len1)
    {
        array[arraylen++]=a1[l++];
    }
    while (r<len2)
    {
        array[arraylen++]=a2[r++];
    }
}

void mergeSort(int array[],int s,int end){
    if (s>=end)
    {
        return;
    }
    int mid=(s+end)/2;
    mergeSort(array,s,mid);
    mergeSort(array,mid+1,end);
    merge(array,s,end);
}

int main()
{
    int array[7]={1,0,56,43,76,98,21};
    int s=0,end=6;
    mergeSort(array,s,end);
    for (int i = 0; i < 7; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
