#include<stdio.h>
#include<unistd.h>
int main(){
    int n;
    printf("enter the starting no. of seconds:");
    scanf("%d",&n);
    for(int i=n;i>=0;i--){
        printf("%d\n",i);
        sleep(1);
    }
    printf("Countdown completed");
    return 0;
}