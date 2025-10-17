//create a variable 'i' and print its address.
//then pass this variable to a function and print its address. are the address same? why?
#include<stdio.h>
int funreturn_5(int *);
int funreturn_5(int *x){
    printf("the value of ptr=%d\n",x);
    printf("the value at ptr=%d\n",*x);
    return 5;
}
int main(){
    int i=4;
    int *ptr=&i;
    printf("the address of a=%u\n",&i);
    funreturn_5(ptr);
    return 0;
}
//they are same bcoz we have passed the same address.