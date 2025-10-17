#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a=0,b=5;
    swap(&a,&b);
    printf("the value of a=%d\n",a);
    printf("the value of b=%d\n",b);
    return 0;
}