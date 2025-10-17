#include<stdio.h>
int main()
{
    int a;
    printf("enter the percentage=");
    scanf("%d",&a);
    if(a>80)
    {
        printf("A");
    } 
    else if(a>60){
        printf("B");
    }
    else if(a>40){
        printf("C");
    }
    else{
        printf("D");
    }

}