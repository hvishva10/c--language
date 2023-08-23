#include<stdio.h>
void selection(int a[], int n) 
{  
  int i, j;  
  for (i = 0; i < n ; i++) 
  {  
    for (j = i+1; j < n; j++)
     {  
      if (a[i] >a [j])
       {  
        int swap = a[j];  
        a[j] = a[i];  
        a[i] = swap;  
      }  
    }  
  }  
}  
int main()
 {  
  int a[] = {42, 34, 25, 12, 22, 11, 90, 9, 5, 42, 24, 35 ,40};  
  int n = sizeof(a) / sizeof(a[0]);  
  selection(a, n);  

  printf("Sorted array: ");  
  for (int i = 0; i < n; i++)
   {  
    printf("%d ", a[i]);  
  }  
  return 0;
}