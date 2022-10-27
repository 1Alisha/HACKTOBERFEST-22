#include<stdio.h>
int s[] =  {3, 2, 7, 4, 1, 5};
int f[] =  {4, 4, 9, 6, 2, 7};



void printMaxActivities(int s[], int f[], int n)
{
    int i, j;



   printf ("The selected activities are: \n");



   i = 0;
    printf("[%d,%d]", s[i],f[i]);



   for (j = 1; j < n; j++)
    {



     if (s[j] >= f[i])
      {
          printf ("[%d,%d]", s[j],f[j]);
          i = j;
      }
    }
}



void bubbleSort(int size) {




  for (int step = 0; step < size - 1; ++step) {




    for (int i = 0; i < size - step - 1; ++i) {



     if (f[i] > f[i + 1]) {



       int temp1 = f[i];
        int temp2 = s[i];
        f[i] = f[i + 1];
        s[i] = s[i+1];
        f[i + 1] = temp1;
        s[i+1] = temp2;
      }
    }
  }
}




int main()
{

   int n = sizeof(s)/sizeof(s[0]);
    // sorting given arrays by finishing time
    bubbleSort(n);



   printMaxActivities(s, f, n);
    return 0;
}
