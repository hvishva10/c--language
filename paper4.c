#include<stdio.h>
int main()
{
    char a[30];
    int i,j,rev=0,same=0;
    printf("enter any name:");
    scanf("%s",&a);
    for(i=0; a[i]!='\0'; i++)
    {
        same=a[i];
    }
    for(j=i; j>=0; j--)
    {
        printf("%c",a[j]);
        rev=a[j];
    }
    if(same==rev)
    {
        printf("\n pelidrom");
    }
    else
    {
        printf("\n not pelidrom");
    }
    return 0;
}

