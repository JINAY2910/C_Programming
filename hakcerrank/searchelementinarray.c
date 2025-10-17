#include<stdio.h>
int main(){
    int n,x;
    printf("enter the size of array=");
    scanf("%d",&n);
    printf("\n");
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the array element=");
        scanf("%d",&arr[i]);
    }
    printf("\nenter the element you want to search=");
    scanf("%d",&x);
    int a=0,idx=0;
    for(int i=0;i<10;i++){
        if(arr[i]==x){
            a=1;
            idx=i;
            break;
        }
    }
    if(a==1){
        printf("\nYes and its index is %d",idx);
    }
    else{
        printf("\nNo");
    }
    return 0;
}