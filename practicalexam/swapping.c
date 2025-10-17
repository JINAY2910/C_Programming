#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a,b;
    printf("enter the value a and b: \n");
    scanf("%d %d",&a,&b);
    int *ptr1=&a,*ptr2=&b;
    swap(ptr1,ptr2);
    printf("%d\n",a);
    printf("%d\n",b);
}