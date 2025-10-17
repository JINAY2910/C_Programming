#include<stdio.h>
struct complex_no{
    int real;
    int imaginary;
};
int main(){
    struct complex_no c;
    c.real=5;
    c.imaginary=4;
    printf("The complex no = %d + %di",c.real,c.imaginary);
    return 0;
}