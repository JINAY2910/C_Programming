#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter your 1st no=");
    scanf("%d",&a);
    printf("enter your 2st no=");
    scanf("%d",&b);
    printf("enter your 3st no=");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("1st no is greatest");
    }
    if(b>a&&b>c)
    {
        printf("2nd no is greatest");
    }
    if(c>a&&c>b)
    {
        printf("3rd no is greatest");
    }
    return 0;
    
}
