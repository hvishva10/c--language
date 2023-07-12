#include<stdio.h>
int dn()
  {
    int a;
      printf("enter a:");
      scanf("%d",&a);
      if(a%15==0)
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
     a=dn();
     printf("ans:%d",a);
   }