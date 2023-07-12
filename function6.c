#include<stdio.h>
char reverse()
{
  char a[30],j,i;

  printf("enter name:");
  scanf("%s",&a);
  for(i=0; a[i]!='\0'; i++){}
  for(j=i; j>=0; j--)
  {
      printf("%c",a[j]);
  }
  return 0;
}
int main()
{
   char a[30];
   int i,j;


   a[j]=reverse();
}