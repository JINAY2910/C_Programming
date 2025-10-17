#include<stdio.h>
int main(){
    int a=4;
    int *ptr=&a;
    printf("the address of a=%u\n",&a);
    printf("the value of a=%d\n",*(&a));
    printf("the value of a=%d\n",*ptr);//use this
    return 0;
}