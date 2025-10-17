#include<stdio.h>
#include<string.h>
int main(){
    char s1[56]="Jinay";
    char s2[56]="bhai";
    strcat(s1,s2);//s1 now contains "Jinaybhai" -> no space in between
    printf("%s\n",s1);
    printf("%s\n",s2);
    return 0;
}