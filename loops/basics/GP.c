//1,2,4,8....nth term
//use of power
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i=1;i<=pow(2,n-1);i=i*2){
        printf("%d\n",i);
    }
}