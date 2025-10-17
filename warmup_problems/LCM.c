#include<stdio.h>
int main(){
    int n,m,max=0;
    printf("enter the no1:");
    scanf("%d",&n);
    printf("enter the no2:");
    scanf("%d",&m);
    if(m==0 && n==0){
        printf("NOT DEFINED");
    }
    else if(m==0 || n==0){
        printf("LCM=0");
    }
    else if(m>=n){
        int max=m;
        while(max % n != 0){
            max=max+m;
        }
        printf("LCM=%d",max);
    }
    else{
        int max=n;
        while(max % m != 0){
            max=max+n;
        }
        printf("LCM=%d",max);
    }
    return 0;
}