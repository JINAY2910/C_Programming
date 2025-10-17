#include<stdio.h>
int main(){
    int n,nst=1;
    printf("enter the no. of lines=");
    scanf("%d",&n);
    int nsp=(n-1);
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        nsp--;
        for(int k=1;k<=nst;k++){
            char ch=(char)a;
            printf("%c ",a);
            a++;
        }
        nst=nst+2;
        printf("\n");
    }
}