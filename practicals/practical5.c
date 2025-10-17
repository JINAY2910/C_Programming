#include<stdio.h>
int main()
{
    float cel,far;
    printf("enter your temperature in celsius=");
    scanf("%f",&cel);
    far=(cel*9.0/5)+32;
    printf("the required temp in fahrenhiet=%f",far);
    return 0;
}