#include<stdio.h>
float c2f(float);
float c2f(float c){
    float f;
    f=(c*9.0/5.0)+32;
    printf("the required temp in fahrenhiet=%.2f",f);
    return f;
}
int main(){
    c2f(40);
    return 0;
}