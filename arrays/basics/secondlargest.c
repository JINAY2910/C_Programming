#include<stdio.h>
#include<limits.h>
int main(){ 
    int arr[5]={5,5,3,2,1};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            smax=max;//smax is now previous max
            max=arr[i];//max is now a new max
        }
        else if(smax<arr[i] && max!=arr[i]){//max > arr[i]
            smax=arr[i];
        }
    }
    printf("the second max no=%d",smax);
    return 0;
} 
