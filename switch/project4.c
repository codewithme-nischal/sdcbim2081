// WAP to input two number and then input an operator(+,-,*. /) to perform 
//respectively operation
#include<stdio.h>
int main()
{
  int a, b,c;
  char op;
  printf("enter any number:");
  scanf("%d,",&a);
  printf("enter a number:");
  scanf("%d",&b);
  printf("enter a operator:");
  scanf("%c",&op);
  switch(op)
    {   case '+': c = a+b;
        printf("result=%d",c);
        break;
        case '-': c = a-b;
        printf("result=%d",c);
        break;
        case '*': c = a*b;
        printf("result=%d",c);
        break;
        case '/': c = a/b;
        printf("result=%d",c);
         break;
     }


     return 0;
}