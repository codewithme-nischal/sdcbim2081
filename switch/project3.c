//WAP to to input a month numbwer(1to 12) & print its respective season
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    switch(n)
    {
        case 11:
        case 12:
        case 1: printf("Spring season");
        break;
        case 3:
        case 4:
        case 2: printf("summer season");
        break;
        case 5:
        case 6:
        case 7: printf("Spring season");
        break;
        case 8:
        case 9:
        case 10:printf("winter season");
        break;
        default: printf("none");
        }
    return 0;
}