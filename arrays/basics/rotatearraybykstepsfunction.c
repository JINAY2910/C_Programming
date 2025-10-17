#include<stdio.h>
void revpart(int a[],int si,int ei){//reversing part of array
    for(int i=si,j=ei;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    return;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n=7;
    int k=3;
    k=k%n;//step 1
    revpart(arr,0,(n-1));//step 2
    revpart(arr,0,(k-1));//step 3
    revpart(arr,k,(n-1));//step 4
    for(int i=0;i<7;i++){
       printf("%d ",arr[i]);
    }
    return 0;
}