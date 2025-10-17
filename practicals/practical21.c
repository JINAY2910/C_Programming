#include<stdio.h>
#include<math.h>
int isvalid(int a,int b,int c);
float area(int a,int b,int c);
void main()
{
    int side1,side2,side3;
    printf("Enter sides of the triangle:");
    scanf("%d %d %d",&side1,&side2,&side3);
    area(side1,side2,side3);
}
int isvalid(int a,int b,int c)
{
    if( a+b>c && a+c>b && a<b+c)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
float area(int a,int b,int c)
{
    float s;
    float area=0;
    if(isvalid( a, b, c))
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("%f",area);
    }
    else
    {
        printf("given sides are invalid");
    }
}