#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double ld=0,k=0,r=0;
    printf("enter the no:");
    scanf("%d",&n);
    int m=n;
    while(m>0){
        m=m/10;
        k++;
    }
    m=n;
    while(m>0){
        ld=m%10;
        r=r+pow(ld,k);
        m=m/10;
    }
    if(r==n){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}