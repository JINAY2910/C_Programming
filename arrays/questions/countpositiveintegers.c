#include<stdio.h>
int count(int a[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            count++;
        }
    }
    printf("the no. of positive integers in the array=%d",count);
    return count;
}
int main(){
    int arr[]={8,2,-3,-4,-5,7},n=7;
    count(arr,n);
    return 0;
}