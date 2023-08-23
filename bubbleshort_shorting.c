#include<stdio.h>
void bubble_sort(int a[], int n) 
{  
  int i, j;  
  for (i = 0; i < n ; i++) 
  {  
    for (j = 0; j < n-1; j++)
     {  
      if (a[j] >a [j + 1])
       {  
        int swap = a[j];  
        a[j] = a[j + 1];  
        a[j + 1] = swap;  
      }  
    }  
  }  
}  
int main()
 {  
  int a[] = {42, 34, 25, 12, 22, 11, 90, 9, 5, 42, 24, 35 ,40};  
  int n = sizeof(a) / sizeof(a[0]);  
  bubble_sort(a, n);  

  printf("Sorted array: ");  
  for (int i = 0; i < n; i++)
   {  
    printf("%d ", a[i]);  
  }  
  return 0;
}