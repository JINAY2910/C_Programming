#include<stdio.h>
int main()
{
    int bs,allowances,deduction,netsalary;
    printf("enter your basic salary=");
    scanf("%d",&bs);
    allowances=70*bs/100+7*bs/100+2*bs/100+4*bs/100;
    deduction=12*bs/100+500;
    netsalary=bs+allowances-deduction;
    printf("\nAllowances=%d",allowances);
    printf("\nDeduction=%d",deduction);
    printf("\nNetsalary=%d",netsalary);
    return 0;
}