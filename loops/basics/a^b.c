#include<stdio.h>
int main(){
    int a,b;
    printf("enter the base=");
    scanf("%d",&a);
    printf("enter the power=");
    scanf("%d",&b);
    int product=1;
    for(int i=1;i<=b;i++){
            product=product*a;
    }
    printf("your result for a^b=%d",product);
}