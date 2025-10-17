#include<stdio.h>
int swap(int *p1,int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    return 0;
}
int main(){
    int a,b;
    printf("enter the values of a = ");
    scanf("%d",&a);
    printf("enter the values of b = ");
    scanf("%d",&b);
    printf("the old values of a and b = %d %d\n",a,b);
    int *p1=&a;
    int *p2=&b;
    swap(p1,p2);
    printf("the new values of a and b = %d %d\n",a,b);
    return 0;
}