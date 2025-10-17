#include<stdio.h>
float avg(int,int,int);
float avg(int a,int b,int c){
    float d;
    d=(a+b+c)/3.0;
    printf("the average of three no=%f",d);
    return d;
}
int main(){
    avg(4,6,3);
    return 0;
}