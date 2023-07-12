#include<stdio.h>
int fibonacci(int n)
{
  if(n < 2)
   {
      return n;
   }

  return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
   int num;
   printf("Number of terms to print in a Fibonacci series");
   scanf("%d", &num);

   for(int i = 0; i < num; i++) {
       printf(" %d ", fibonacci(i));
   }
    return 0;
}
