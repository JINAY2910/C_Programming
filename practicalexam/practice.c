#include<stdio.h>
#include<string.h>
int main(){
    char no[100];
    scanf("%s",&no);
    for(int i=0;i<strlen(no);i++){
        if(no[i]=='1'){
                no[i]='0';
            }
            else{
                no[i]='1';
            }
    }
    printf("The complement =%s\n",no);
}