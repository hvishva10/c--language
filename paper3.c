#include<stdio.h>
 int main()
   { 
     int a[100],i,size, min,max;
       printf("enter the size of array:");
       scanf("%d",&size);
         for(i=0; i<size; i++)
         {
             scanf("%d",&a[i]);
         }
          max=a[0];
          min=a[0];
         for(i=0; i<size; i++)
         {
            if(a[i]>max)
              {
                 max=a[i];
              }
            else
            if(a[i]<max)
              {
                min=a[i];
              }
          }
         printf("maximum value:%d\n",max);
         printf("minimum value:%d\n",min);        
    return 0;
   }