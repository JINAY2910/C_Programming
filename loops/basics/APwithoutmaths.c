#include<stdio.h>
int main(){
    int n;//itni baar loop chalegi
    printf("enter the number=");
    scanf("%d",&n);
    //4,7,11,14....nth term
    //we are going to use extra variables 
    int a=4;
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        a=a+3;
    }
}