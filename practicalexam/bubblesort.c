#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array :");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the 1st array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Ascending Order :");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}