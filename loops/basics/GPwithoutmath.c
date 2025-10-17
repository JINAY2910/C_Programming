//1,2,4,8,16....nth term
#include<stdio.h>
int main(){
    int n;
    int a=1;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        a=a*2;
    }
}