#include<stdio.h>
int main(){
    char c='A';
    char *ptr=&c;
    printf("the address of c is %u\n",&c);
    printf("the address of c is %u\n",ptr);
    ptr++;
    printf("the address of c is %u\n",ptr);
}
//the pointer value increase = the no. of bytes that char(data type) take here
