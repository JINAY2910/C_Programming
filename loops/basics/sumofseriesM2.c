//1-2+3-4+5-6....nth term
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter the number=");
    scanf("%d",&n);
    if(n%2==0){
        printf("the sum=%d",-n/2);
    }
    else{
        printf("the sum=%d",-n/2+n);
    }
}