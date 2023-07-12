#include<stdio.h>
int main()
{
 int a[3][3]={1,2,3,4,5,6,7,8,9};
 int i,j,sum=0;
     for(int i=0; i<3; i++)
        {
           for(int j=0; j<3; j++)
             {
                 printf("%d",a[i][j]);
             }
           printf("\n");
         }
            for(int i=0; i<3; i++)
             {
                for(int j=0; j<3; j++)
                {
                   if(i>=j) 
                     {
                       sum+=a[i][j]; 

                     }
                }
            }
              printf("total:%d\n",sum);
              return 0;
    }