#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter the number=");
    scanf("%d",&n);
    //1-2+3-4+5-6....nth term
    //odd numbers -> add
    // even numbers -> subtract
    for(int i=1;i<=n;i++){
        if(i%2!=0) sum=sum+i;
        else sum=sum-i;
    }
    printf("the sum of the series=%d",sum);
}
//if n=1000 then loop will run 1000 times(iterations) so we use M2(formula) to prevent this