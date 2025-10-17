//sum(n)=1+2+3+4....(n-1)+n;
//sum(n)=sum(n-1)+n;
#include<stdio.h>
int sum(int);
int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return sum(n-1) + n;
    }
}
int main(){
    int n=5;
    printf("the sum of first %d natural numbers=%d",n,sum(n));
    return 0;
}