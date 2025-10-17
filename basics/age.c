#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the age of Jinay=");
    scanf("%d",&a);
    printf("enter the age of Rahul=");
    scanf("%d",&b);
    if(a>b)
    {
        printf("Jinay is older than Rahul with years=%d",a);
    }
    else
    {
        printf("Rahul is older than Jinay with years=%d",b);
    }
}
