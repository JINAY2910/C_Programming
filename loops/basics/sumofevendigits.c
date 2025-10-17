#include<stdio.h>
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int sum=0;
    int evendigit=0;
    while(n>0){
        if(n%2==0){
            evendigit=n%10;
            sum=sum+evendigit;
            n=n/10;
        }
        else{
            n=n/10;
            continue;
        }
    }
    printf("the sum of even digits=%d",sum);
}  