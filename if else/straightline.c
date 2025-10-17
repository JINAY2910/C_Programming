#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    float m1,m2;
    printf("enter your points x1=");
    scanf("%d",&x1);
    printf("enter your points x2=");
    scanf("%d",&x2);
    printf("enter your points x3=");
    scanf("%d",&x3);
    printf("enter your points y1=");
    scanf("%d",&y1);
    printf("enter your points y2=");
    scanf("%d",&y2);
    printf("enter your points y3=");
    scanf("%d",&y3);
    m1=(y2-y1)/(x2-x1);
    printf("your slope of line1=%f\n",m1);
    m2=(y3-y2)/(x3-x2);
    printf("your slope of line2=%f",m2);
    if(m1==m2){
        printf("\nthe three points lie on the same line bcoz m1=m2");
    }
    else{
        printf("\nthe three points do not lie on the same line bcoz m1 and m2 are not equal");
    }

}