#include<stdio.h>
int main()
{
  int a=0,b=1,c,n;
  
  printf("enter terms:");
  scanf("%d",&n);

  for(int i=1; i<=n; i++)
    {
          if(i==1)
          {
                   printf("%d",b);
          }
          else
          {
                    c=a+b;
                    printf("%d",c);
                    a=b;
                    b=c;
          }
      }
       return 0;
  }