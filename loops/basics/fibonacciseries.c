#include<stdio.h>
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int a=1,b=1,sum=1;
    printf("the 1th fibonacci term=%d\n",sum);
    printf("the 2th fibonacci term=%d\n",sum);
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("the %dth fibonacci term=%d\n",i+2,sum);
    }    
}