//pointers must be used.
#include<stdio.h>
int sum(int *,int *);
float avg(int *,int *);
int sum(int *x,int *y){
    int s = *x + *y;
    return s;
}
float avg(int *x,int *y){
    float a = ( *x + *y ) / 2.0;
    return a;
}
int main(){
    int a=3,b=4;
    int *ptr1=&a;
    int *ptr2=&b;
    printf("the sum of a and b=%d\n",sum(ptr1,ptr2));
    printf("the avg of a and b=%f\n",avg(ptr1,ptr2));
    return 0;
}