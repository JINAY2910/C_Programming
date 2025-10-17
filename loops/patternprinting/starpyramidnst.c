#include<stdio.h>
int main(){
    int n,nst=1;
    printf("enter the no. of lines=");
    scanf("%d",&n);
    int nsp=(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        nsp--;
        for(int k=1;k<=nst;k++){
            printf("* ");
        }
        nst=nst+2;
        printf("\n");
    }
}