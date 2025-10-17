#include<stdio.h>
int main(){
    int arr[5]={1,4,3,2,9};
    for(int i=0;i<=5-1;i++){
        for(int j=0;j<=5-i-1;j++){
            if(arr[j+1]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("descending order = ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}