#include<stdio.h>
#include<string.h>
struct employee{
    int salary;
    char name[10];
};
void show(struct employee e){
    printf("%d %s\n",e.salary,e.name);
}
int main(){
    struct employee e1,e2;
    e1.salary=100;
    strcpy(e1.name,"Jinay");
    e2.salary=200;
    strcpy(e2.name,"Arth");
    show(e1);
    show(e2);
    return 0;
}