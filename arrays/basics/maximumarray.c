#include<stdio.h>
int main(){ 
    int arr[5]={-1,-2,-19,-4,-5};
    int max=arr[0];//or use INT_MIN(library=#include<limits.h>) and intialization of i=0
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("the max no=%d",max);
    return 0;
    }
