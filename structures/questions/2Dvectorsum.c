#include<stdio.h>
struct vector{
    int i;
    int j;
};
struct vector sum(struct vector v1, struct vector v2){
    struct vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}
int main(){
    struct vector v1 = {5,6};
    struct vector v2 = {1,2};
    struct vector v3 = sum(v1,v2);
    printf("The sum of vectors v1 & v2 = %di + %dj",v3.i,v3.j);
    return 0;
}