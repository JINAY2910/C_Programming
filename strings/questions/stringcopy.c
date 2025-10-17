#include<stdio.h>
#include<string.h>
void copy(char source[],char target[]){
    for(int i=0;i<(strlen(source));i++){
        target[i]=source[i];
    }
    target[strlen(source)]='\0';
    printf("%s %s",source,target);
}
int main(){
    char str1[]="Jinay";
    char str2[30];
    copy(str1,str2);
    return 0;
}