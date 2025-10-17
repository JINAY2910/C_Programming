//4,7,10,13,16...nth term
#include<stdio.h>
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i=4;i<=3*n+1;i=i+3)
    printf("%d\n",i);
}