#include<stdio.h>
#include<string.h>
struct employees{
        int roll_no;
        float salary;
        char name[30];
    };
int main(){
    struct employees e1,e2,e3;
    printf("\nenter the roll_no of employee 1:");
    scanf("%d",&e1.roll_no);
    printf("enter the salary of employee 1:");
    scanf("%f",&e1.salary);
    printf("enter the name of employee 1:");
    scanf("%s",&e1.name);
    printf("\nenter the roll_no of employee 2:");
    scanf("%d",&e2.roll_no);
    printf("enter the salary of employee 2:");
    scanf("%f",&e2.salary);
    printf("enter the name of employee 2:");
    scanf("%s",&e2.name);
    printf("\nenter the roll_no of employee 3:");
    scanf("%d",&e3.roll_no);
    printf("enter the salary of employee 3:");
    scanf("%f",&e3.salary);
    printf("enter the name of employee 3:");
    scanf("%s",&e3.name);
    printf("\nthe roll_no, salary and name of employee 1:%d %f %s\n",e1.roll_no,e1.salary,e1.name);
    printf("the roll_no, salary and name of employee 2:%d %f %s\n",e2.roll_no,e2.salary,e2.name);
    printf("the roll_no, salary and name of employee 3:%d %f %s\n\n",e3.roll_no,e3.salary,e3.name);
    return 0;
}