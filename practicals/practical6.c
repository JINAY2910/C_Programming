#include<stdio.h>
int main()
{
    char opt;
    int a,b;
    float c;
    printf("enter an arithmetic operation from(+,-,*,/,):");
    scanf("%c",&opt);
    printf("enter the 1st no=");
    scanf("%d",&a);
    printf("enter the 2nd no=");
    scanf("%d",&b);
    if(opt=='+')
    {
        c=a+b;
        printf("addition=%f",c);
    }
    else if(opt=='-')
    {
        c=a-b;
        printf("subraction=%f",c);
    }
    else if(opt=='*')
    {
        c=a*b;
        printf("multipication=%f",c);
    }
    else if(opt=='/')
    {
        c=a/b;
        printf("division=%f",c);
    }
    else
    {
        printf("enter a valid operation");
    }
    return 0;
}    