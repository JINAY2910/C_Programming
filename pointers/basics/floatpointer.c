#include<stdio.h>
int main(){
    float i=5.232;
    float *ptr = &i;//ptr is an pointer(float pointer) pointing to i
    printf("the address of i=%p\n",&i);
    printf("the address of i=%p\n",ptr);
    printf("the value at address j=%f\n",i);
    printf("the value at address j=%f\n",*(&i));
    printf("the value at address j=%f\n",*ptr);
    printf("the address of i=%p\n",*(&ptr));
    printf("the address of ptr=%p\n",&ptr);
    return 0;
}
