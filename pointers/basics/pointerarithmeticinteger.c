#include<stdio.h>
int main(){
    int a=5;
    int *ptr=&a;
    printf("the address of a is %u\n",&a);
    printf("the address of a is %u\n",ptr);
    ptr++;
    printf("the address of a is %u\n",ptr);
}
//the pointer value increase = the no. of bytes that int(data type) take here
