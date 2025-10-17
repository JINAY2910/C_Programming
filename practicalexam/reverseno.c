#include<stdio.h>
int main(){
    int n,r=0,ld=0;
    printf("Enter The No: ");
    scanf("%d",&n);
    int m=n;
    while(m>0){
        ld=m%10;
        r=(r*10)+ld;
        m=m/10;
    }
    printf("OG :%d",n);
    printf("RN :%d",r);
}