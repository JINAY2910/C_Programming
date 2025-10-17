#include<stdio.h>
int factorial(int);
int factorial(int n){
    if(n==1 || n==0){//base condition
        return 1;
    }
    else{
        return factorial(n-1)*n;
    }
}
int main(){
    int n=7;
    printf("%d",factorial(n));
}