#include<stdio.h>
#include<string.h>
struct employee{
    int salary;
    char name[10];
};
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    e1.salary=500;
    printf("%d",(*ptr).salary);// same as -> printf("%d",ptr->salary);
    return 0;
}    