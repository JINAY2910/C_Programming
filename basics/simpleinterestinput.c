#include<stdio.h>
int main()
{
    float p,r,t,s;
    printf("enter principal:");
    scanf("%f",&p);
    printf("enter rate:");
    scanf("%f",&r);
    printf("enter time:");
    scanf("%f",&t);
    printf("your simple interest is%f",(p*r*t)/100);
    return 0;
}