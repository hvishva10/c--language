#include<stdio.h>
int perfact()
{
 int num,sum=0,i;
 printf("enter value:");
 scanf("%d",&num);
 for(i=1; i<num; i++)
  {
     if(num%1==0)
       {
         printf("%d\n",i);
         sum=sum+i;
       }
  }
  if(sum=num)
   {
          printf("%d\n perfact num",sum);
   }
  else
   {
           printf("%d\n non perfact num",sum);
   }
  return sum;
}
   int main()
     {
        perfact();
     }