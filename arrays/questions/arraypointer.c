//In an array verify using pointer arithmetic that (ptr+2) points to the 3rd element
//where ptr is a pointer pointing to the first element of the array
#include<stdio.h>
int main(){
    int arr[10]={1,2,5,4,11,6,7,8,9,10};
    int *ptr=arr;
    printf("the third element of the array with address %u is %d\n",&arr[2],arr[2]);
    printf("the value at address %u is %d\n",ptr+2,*(ptr+2));
    return 0;
}
//conclusion -> if there is a 1D array then *(ptr+x) refers to the (x+1) element