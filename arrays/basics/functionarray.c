#include<stdio.h>
void fun(int x[]){
    x[0]=10;
    return;
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);
    return 0;
}
//passing array to functions -> pass by refernece
//when we pass an array as an arguement to function then address of the first element of the array