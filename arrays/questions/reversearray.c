#include<stdio.h>
void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void reversearray(int a[],int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
}
int main(){
    int arr[]={1,2,3,4,5},n=5;
    printarray(arr,n);
    reversearray(arr,n);
    printarray(arr,n);
    return 0;
}