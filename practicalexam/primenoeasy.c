#include<stdio.h>
int isPrime(int num){
    if(num==1){
            return 0;
        }
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,m;
    printf("Enter the range :");
    scanf("%d %d",&n,&m);
    if(m<n || m>1000 || n<1){
        printf("Invalid Input");
    }
    else {
        printf("\n");
        for(int i=n;i<=m;i++){
            if(isPrime(i)){
            printf("%d\n",i);
            }
        }
    }
    return 0;
}