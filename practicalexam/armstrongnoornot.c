#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double r=0,ld=0,k=0;
    printf("Enter The No :");
    scanf("%d",&n);
    int m=n;
    while(m>0){
      k++;
      m=m/10;
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
}