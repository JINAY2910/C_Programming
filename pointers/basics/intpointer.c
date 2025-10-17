#include<stdio.h>
int main(){
    int i=72;
    //step 1 -> int *ptr; -> declaration of a pointer
    //step 2 -> *ptr = &i -> store address of i in ptr
    int *ptr = &i;//ptr is an pointer(integer pointer) pointing to i(both step 1 and step 2 in a single step)
    printf("the address of i=%p\n",&i);
    printf("the address of i=%p\n",ptr);
    printf("the value at address j=%d\n",i);
    printf("the value at address j=%d\n",*(&i));
    printf("the value at address j=%d\n",*ptr);
    printf("the address of i=%p\n",*(&ptr));
    printf("the address of ptr=%p\n",&ptr);
    return 0;
}
// we can use both %u and %p(pointers).
//just like pointer of type integer, we also have pointers to char, float etc.