#include<stdio.h>
#include<string.h>
int main(){
    char source[]= "Jinay";
    char target[30];
    strcpy(target,source);//target now contains "Jinay"
    printf("%s %s",source,target);
    return 0;
}