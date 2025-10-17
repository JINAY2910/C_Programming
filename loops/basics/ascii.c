//use of typecasting
//A=65 and a=97 remember
#include<stdio.h>
int main(){
    for(int i=65;i<=90;i++){
        char ch=(char)i;
        printf("%c->",i);
        printf("%d\n",i);
    }
    return 0;
}