#include<stdio.h>
int ln()
  {
    int year;
      printf("enter year:");
      scanf("%d",&year);
      if(year%4==0)
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
     int year;
     year=ln();
     printf("ans:%d",year);
   }