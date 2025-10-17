#include<stdio.h>
int main(){
    int a=4;
    printf("%d %d %d",a,++a,a++);
}
//most compilers ->6 6 4(bcoz of right to left evaluation)
//some compilers ->4 5 5