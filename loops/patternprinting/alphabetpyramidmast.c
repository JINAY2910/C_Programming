#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of lines:");
    scanf("%d",&n);
    int nsp=(n-1);
    for(int i=1;i<=n;i++){
        int a=65,b=i+63;
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        nsp--;
        for(int k=1;k<=i;k++){
            char ch=(char)a;
            printf("%c ",a);
            a++;
        }
       for(int l=1;l<=(i-1);l++){
           char ch=(char)b;
           printf("%c ",b);
           b--;
        }
        printf("\n");   
   }
}