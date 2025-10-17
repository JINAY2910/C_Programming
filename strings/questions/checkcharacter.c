#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Jinay";
    int a=0;
    char ch='h';
    for(int i=0;i<(strlen(str));i++){
        if(str[i]==ch){
            a=1;
            break;
        }
    }
    if(a){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}