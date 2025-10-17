#include<stdio.h>
#include<string.h>
typedef struct employee{
    int salary;
    char name[10];
}Emp;
int main(){
    Emp e1;
    Emp *ptr1 = &e1;
    //typedef can also be done as -> typedef struct employee Emp;
    e1.salary=100;
    strcpy(e1.name,"Jinay");
    printf("%d %s\n",ptr1->salary,ptr1->name);
    return 0;
}    