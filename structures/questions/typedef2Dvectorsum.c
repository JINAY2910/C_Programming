#include<stdio.h>
typedef struct vector{
    int i;
    int j;
}V;
V sum(V v1, V v2){
    V v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}
int main(){
    V v1 = {5,6};
    V v2 = {1,2};
    V v3 = sum(v1,v2);
    printf("The sum of vectors v1 & v2 = %di + %dj",v3.i,v3.j);
    return 0;
}