#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    printf("the old values of a and b = %d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the new values of a and b = %d %d\n",a,b);
    return 0;
}