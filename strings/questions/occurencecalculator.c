#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Jinay";
    char ch='n';
    int count=0;
    for(int i=0;i<(strlen(str));i++){
        if(str[i]==ch){
            count++;
        }
    }
    printf("occurence=%d",count);
}