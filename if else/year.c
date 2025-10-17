#include<stdio.h>
int main()
{
    int a;
    printf("enter your =");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("it's a leap year");
    }
    else
    {
        printf("it's not a leap year");
    }
}