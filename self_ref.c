#include<stdio.h>
struct node
{
   int data;
   struct node *ptr;
};
int main()
{
    struct node a,b,c,d,e,f;
    a.data=65;
    a.ptr=NULL;
    b.data=70;
    b.ptr=NULL;
    c.data=75;
    c.ptr=NULL;
    d.data=80;
    d.ptr=NULL;
    e.data=85;
    e.ptr=NULL;
    

    a.ptr=&b;
    b.ptr=&a;
    c.ptr=&d;
    d.ptr=&c;
    e.ptr=&e;
    printf("a: data: %d\n",b.ptr->data);
    printf("b: data: %d\n",a.ptr->data);
    printf("c: data: %d\n",d.ptr->data);
    printf("d: data: %d\n",c.ptr->data);
    printf("e: data: %d\n",e.ptr->data);
}