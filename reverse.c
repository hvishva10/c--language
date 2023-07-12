
#include<stdio.h>
 int main()
 {
    char a[30];
    int i,j;

         printf("enter name:");
         scanf("%s",&a);
         i=0;
         while(a[i]!='\0')
           {
             i++;
           }
          j=i-1;
          while(j>=0)
            {
                printf("%c",a[j]);
                j--;  
            }
       return 0;
}