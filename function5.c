#include<stdio.h>
int sn()
  {
    int a,b;
      printf("enter a:");
      scanf("%d",&a);
       printf("enter b:");
      scanf("%d",&b);
      if(a<b)
      {
         return 1;
      }
      else
      {
          return 0;
      }
   }
 void main()
  {
     int a;
     a=sn();
     printf("ans:%d",a);
   }