#include<stdio.h>
int main(){
    int n,x;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the elements to search: ");
    scanf("%d",&x);
    int i,a=0;
    for(i=0;i<n;i++){
        if(x==arr[i]){
            a=1;
            break;
        }
    }
    if(a==1){
        printf("Yes and index is %d",i);
    }
    else{
        printf("No");
    }
    return 0;
}