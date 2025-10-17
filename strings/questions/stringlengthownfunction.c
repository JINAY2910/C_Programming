#include<stdio.h>
int stringlength(char str[]){
    int count=0,i=0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    printf("%d",count);
    return count;
}
int main(){
    char st[]="Jinay";
    stringlength(st);
    return 0;
}