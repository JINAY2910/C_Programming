//imp qusetion,n will be odd
#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of lines:");
    scanf("%d",&n);
    int nst=1;
    int nsp=n/2;
    int ml=(n+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int k=1;k<=nst;k++){
            printf("* ");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
}