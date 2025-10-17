//100,97,94...up to  all terms which are +ve
#include<stdio.h>
int main(){
    int a=100;
    for(int i=1;a>0;i++){
        printf("%d\n",a);
        a=a-3;
    }
} 