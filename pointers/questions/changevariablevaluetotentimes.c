#include<stdio.h>
void fun(int *);
void fun(int *x){
    *x = (*x) * 10;
    return;
}
int main(){
    int a=5;
    int *ptr=&a;
    printf("the old value of a=%d\n",a);
    fun(ptr);
    printf("the new value of a=%d\n",a);
    return 0;
}