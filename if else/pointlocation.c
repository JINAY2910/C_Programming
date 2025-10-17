#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the coordinate x=");
    scanf("%d",&x);
    printf("enter the coordinate y=");
    scanf("%d",&y);
    if(x==0&&y==0){
        printf("the point lies on origin");
    }
    else if(x==0){
        printf("the point lies on yaxis");
    }
    else if(y==0){
        printf("the point  lies on xaxis");
    }
    else{
        printf("the point do not lie on xaxis or yaxis");
    }
}