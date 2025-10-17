#include<stdio.h>
#include<string.h>
struct employee{
    int salary;//this declares a new user defined data type!
    char name[10];
};//semicolon is important
int main(){
    struct employee e1,e2;// structures can also be initialized as -> struct employee e1 = {100,"Jinay"};
    e1.salary=100;
    strcpy(e1.name,"Jinay");
    e2.salary=101;
    strcpy(e2.name,"Het");
    printf("%d %s\n",e1.salary,e1.name);
    printf("%d %s",e2.salary,e2.name);
    return 0;
} 
//to store data of same data type array is preferred over structures