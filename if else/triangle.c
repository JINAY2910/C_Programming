#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter te 1st side=");
    scanf("%d",&a);
    printf("enter the 2nd side=");
    scanf("%d",&b);
    printf("enter the 3rd side=");
    scanf("%d",&c);
    if(a+b>c&&b+c>a&&c+a>b)
    {
        printf("the three side can form a triangle");
    }
    else
    {
        printf("the three sides cannot form a triangle");

    }


}