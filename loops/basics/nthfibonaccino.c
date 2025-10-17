//very very imp question
//1,1,2,3,5,8,13,21,34,55,89.....nth term -> fibonacci series
#include<stdio.h>
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int a=1,b=1,sum=1;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;    
    }
    printf("the %dth fibonacci term=%d",n,sum);
}