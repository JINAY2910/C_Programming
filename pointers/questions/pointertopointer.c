#include<stdio.h>
int main(){
    int i=4;
    int *ptr1=&i;
    int **ptr2=&ptr1;
    printf("the value of i=%d\n",*ptr1);
    printf("the value of i=%d\n",**ptr2);
    return 0;
}