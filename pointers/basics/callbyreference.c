#include<stdio.h>
// sum will change the value of a.
int sum(int *,int *);
int sum(int *x, int *y){
    *x=6;
    return *x + *y;
}
int main(){
    int a=1,b=6;
    printf("the sum = %d\n",sum(&a,&b));
    printf("the value of a is %d\n",a);
    return 0;
}