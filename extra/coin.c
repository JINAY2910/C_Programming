#include<stdio.h>
int main()
{
    int n,n100,n50,n10;
    printf("enter the amount=");
    scanf("%d",&n);
    n100=n/100;
    n50=n%100/50;
    n10=(n%100)%50/10;
    printf("\nthe no of 100 notes=%d",n100);
    printf("\nthe no of 50 notes=%d",n50);
    printf("\nthe no of 10 notes=%d",n10);
    return 0;
}