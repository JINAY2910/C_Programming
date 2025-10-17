#include<stdio.h>
int main()
{
    int a;
    printf("enter your number=");
    scanf("%d",&a);
    if(a<0)
    {
        a=a*(-1);
        printf("your number=%d",a);
    }
    else
    {
        printf("your required number=%d",a);
    }
}