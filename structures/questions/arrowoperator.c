#include<stdio.h>
#include<string.h>
struct employee{
    int salary;
    char name[10];
};
int main(){
    struct employee e1;
    struct employee *ptr = &e1;
    //(*ptr).salary = 100;
    //strcpy((*ptr).name,"Jinay");
    ptr->salary = 100;
    strcpy(ptr->name,"Jinay");
    printf("%d %s\n",ptr->salary,ptr->name);
    return 0;
}    