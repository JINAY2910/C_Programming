#include<stdio.h>
#include<string.h>
struct employee{
    int salary;
    char name[10];
};
int main(){
    struct employee arr[5];
    arr[0].salary=100;
    arr[1].salary=101;
    strcpy(arr[0].name,"Jinay");
    strcpy(arr[1].name,"Het");
    printf("%d %s\n",arr[0].salary,arr[0].name);
    printf("%d %s",arr[1].salary,arr[1].name);
    return 0;
}    
    