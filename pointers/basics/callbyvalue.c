#include<stdio.h>
// sum function will not change the value of a bcoz
// copy of a is provided to sum in x
int sum(int,int);
int sum(int x, int y){
    x=6;
    return x + y;
}
int main(){
    int a=1,b=6;
    printf("the sum = %d\n",sum(a,b));
    printf("the value of a is %d\n",a);
    return 0;
}