#include<stdio.h>
int main(){
    int m,n;
    printf("enter the number of rows=");
    scanf("%d",&m);
    printf("enter the number of columns=");
    scanf("%d",&n);
    for(int i=1;i<=m;i++){//outer loop -> no. of lines
        for(int j=1;j<=n;j++){//inner loop -> no. of stars in each line 
            printf("* ");
        }
        printf("\n");//enter after every line 
    }
}