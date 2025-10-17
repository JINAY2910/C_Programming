#include<stdio.h>
int main()
{
    int a;
    printf("enter your no=");
    scanf("%d",&a);
    if(a%5==0)
    {
        if(a%3==0){
        printf("the no is divisible by 5 and 3");
        }
        else{
            printf("the no is not divisible by 5 and 3");
        }
    }
    else{
        printf("the no is not divisible by 5 and 3");
    }
}