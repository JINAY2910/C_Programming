#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the range (start and end): ");
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++){
        int a=1;
        for(int j=2;j<=i-1;j++){
            if(i%j==0){
                a=0;
                break;
            }
        }
        if(a==1){
        printf("%d\n",i);
        }
    }
}