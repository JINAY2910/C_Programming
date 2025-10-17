#include<stdio.h>
int main()
{
    int a;
    printf("enter your no=");
    scanf("%d",&a);
    if(a%5==0||a%3==0){
        if(a%15!=0){
        printf("the number is valid");
        }
        else{
            printf("the number is not valid");
        }
    }
    else{
        printf("the number is not valid");
    }
    
}
