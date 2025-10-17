#include<stdio.h>
void fun(int );
void fun(int x){
    x = x * 10;
    return;
}
int main(){
    int a=5;
    printf("the old value of a=%d\n",a);
    fun(a);
    printf("the new value of a=%d\n",a);
    return 0;
}
//we must use call by reference to change the value of a.
//it can't be done by call by value.