#include<stdio.h>
int main()
{
    int choice, a , b;

    float area, fa,c;
    printf("1.Area of circle/n 2.Check odd\even/3. convert fahrenheit to cdelcuis/n");
    printf("enter your choice (1-3)");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("enter a radius:");
                scanf("%d",&a);
                area=3.14*a*a;
                printf("Area of circle=%f",area);
        break;
        case 2: printf("enter any number:");
                scanf("%d",&a);
                if(a%2==0)
                printf("Even");
                else
                printf("odd");
        break;        
        case 3: printf("enter temperture of room in fahrenhit:");
                scanf("%f",&fa);
                c=5.0/9*(fa-32);
                printf(" celcuis of  room =%.2f",c);
        break;
        default:printf("invalid command:");
    }
    return 0;
}