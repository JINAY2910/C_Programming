#include<stdio.h>
struct vector{
    int i;
    int j;
};
int main(){
    struct vector v;
    v.i=5;
    v.j=4;
    printf("The vector = %di + %dj",v.i,v.j);
}