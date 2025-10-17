#include<stdio.h>
int main()
{
    int a,b,opt;
    printf("enter your 1st no=");
    scanf("%d",&a);
    printf("enter your 2nd no=");
    scanf("%d",&b);
    printf("Enter an arithmetic operation\n1 for add\n2 for sub\n3 for mul\n4 for div\nYour operation=");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        printf("addition=%d",a+b);
        break;
        case 2:
        printf("subtraction=%d",a-b);
        break;
        case 3:
        printf("multiplication=%d",a*b);
        break;
        case 4:
        printf("division=%d",a/b);
        break;
        default:
        printf("enter a valid value");
    }


}