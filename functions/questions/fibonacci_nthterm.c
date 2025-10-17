//0,1,1,2,3,5,8,13,21....
#include<stdio.h>
int fibonacci(int);
int fibonacci(int n){
    if(n==1 || n==2){
        return n-1;
    }
    else{
        return fibonacci(n-2)+fibonacci(n-1);
    }
}
int main(){
    int n=7;
    printf("the %dth term=%d",n,fibonacci(n));
    return 0;
}