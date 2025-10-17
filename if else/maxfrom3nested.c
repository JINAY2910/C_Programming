#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the 1st no=");
    scanf("%d",&a);
    printf("enter the 2st no=");
    scanf("%d",&b);
    printf("enter the 3st no=");
    scanf("%d",&c);
    if(a>b){// b is out of race
        if(a>c){
            printf("%d is greatest",a);
        }
        else{// a<c -> b>a>c
            printf("%d is greatest",c);
        }
    }
    else{// b>a -> a is out of race
        if(b>c){
        printf("%d is greatest",b);
        }
        else{// c>b -> a<b<c
            printf("%d is greatest",c);
        }
    }
    
}