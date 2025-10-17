//ternary operator
//exp1 ? exp2 : exp3
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    n%2==0 ? printf("the number is even") : printf("the number is odd") ;
    return 0;
}