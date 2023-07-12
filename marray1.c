#include<stdio.h>
 int main()
{
   int a[2][2]={1,2,3,4},sum=0;
   for(int i=0; i<2; i++)
   {
      for(int j=0; j<2; j++)
        {
           printf("%d",a[i][j]);
           sum=sum+a[i][j];
        }
       printf("\n");
    }
    printf("total:%d",sum);
    return 0;
 }