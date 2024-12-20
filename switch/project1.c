#include<stdio.h>
int main ()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("hello");

        break;
        case 2: printf("hi");
        break;
        case 3: printf("Namaste");
        break;
        default:printf("bye");
   }
   return 0;
}