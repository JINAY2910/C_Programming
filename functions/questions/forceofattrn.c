#include<stdio.h>
float force(float);
float force(float mass){
    return mass*9.8;//F=m*g
}
int main(){
    int m=5;
    printf("the force of attrn=%fm/s^2",force(m));
    return 0;
}