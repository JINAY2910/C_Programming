#include<stdio.h>
int main(){
    char i='A';
    char *ptr = &i;//ptr is an pointer(character pointer) pointing to i
    printf("the address of i=%p\n",&i);
    printf("the address of i=%p\n",ptr);
    printf("the value at address j=%c\n",i);
    printf("the value at address j=%c\n",*(&i));
    printf("the value at address j=%c\n",*ptr);
    printf("the address of i=%p\n",*(&ptr));
    printf("the address of ptr=%p\n",&ptr);
    return 0;
}
