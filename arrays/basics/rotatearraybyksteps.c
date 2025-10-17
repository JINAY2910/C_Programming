//without functions
#include<stdio.h>
int main(){
    int arr[4]={1,2,3,4};
    int brr[4];
    int k;
    printf("enter the value of k=");
    scanf("%d",&k);
    k=k%4;
    for(int i=0;i<=(k-1);i++){//part that we want to reverse is stored in brr
        brr[(k-1)-i]=arr[3-i];
    }
    for(int i=k;i<=3;i++){//part that remain same is stored in brr
        brr[i]=arr[i-k];
    }
    for(int i=0;i<=3;i++){//values of brr are given to arr also
        arr[i]=brr[i];
    }
    for(int i=0;i<=3;i++){//arr(new) is printed
        printf("%d\n",arr[i]);
    }
}