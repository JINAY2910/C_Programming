//starting index = 1, ending index = 4
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
     revpart(arr,1,4);
     for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
     }
     return 0;
}