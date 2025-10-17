#include<stdio.h>
int sum(int,int);//function prototype

//function definition
int sum(int x,int y){
    printf("the sum=%d\n",x+y);
    return x+y;
}
int main(){
sum(2,3);//function call
sum(4,5);//function call
sum(5,6);//function call
sum(23,25);//function call
return 0;
}