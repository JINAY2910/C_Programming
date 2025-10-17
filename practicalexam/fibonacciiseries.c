//1,1,2,3,5,8,13,21
#include<stdio.h>
int main(){
    int n,a=1,b=1,sum=1;
    printf("enter the nth term of the fibonacci series :");
    scanf("%d",&n);
    printf("the 1st fibonacci term=%d\n",sum);
    printf("the 2nd fibonacci term=%d\n",sum);
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("the %dth fibonacci term=%d\n",i+2,sum);
    }
}