#include<stdio.h>
typedef struct complex_no{
    int real;
    int imaginary;
}complex;
void display(complex c){
    printf("the comlex no = %d + %di\n",c.real,c.imaginary);
}
int main(){
    complex carr[5];
    for(int i=0;i<5;i++){
        printf("enter the real part=");
        scanf("%d",&carr[i].real);
        printf("enter the imaginary part=");
        scanf("%d",&carr[i].imaginary);
        display(carr[i]);
    }
    return 0;
}