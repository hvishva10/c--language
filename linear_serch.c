#include<stdio.h>
#include<stdlib.h>
#define n 10
int linearserch(int a[], int x)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] == x)
        {
            return i++;
        }
    }
    return -1;
}
int main()
{
    int a[n],i ,ele;
    for(i=0; i<n; i++)
    {
        a[i]=rand()%50+1;
    }
    for(i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n enter serch element");
    scanf("%d",&ele);
    int m=linearserch (a,ele);
    if(m == -1)
    {
        printf("element is not found");
    }
    else
    {
        printf("serch element is found at %d possition",m);
    }
}