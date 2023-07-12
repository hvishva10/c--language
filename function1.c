#include<stdio.h>

int passOrFail()
 {
	int a;
	printf("enter a:");
	scanf("%d",&a);
	return a>=18;
}

void main()
{
	int a;
	a = passOrFail();
 	printf("ans: %d\n",a);
}