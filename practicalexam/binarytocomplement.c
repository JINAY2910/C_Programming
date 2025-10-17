#include<stdio.h>
#include<string.h>
int main(){
    char no[100],n[100]; 
    int a=1;
    printf("enter the no in binary :");
    scanf("%s",&no);
    for(int i=0;i<strlen(no);i++){
        n[i]=no[i];
    }
    n[strlen(no)]='\0';
    for(int i=0;i<strlen(no);i++){
        if(no[i]!='1' && no[i]!='0'){
            printf("Invalid Input");
            a=0;
            break;
        }
    }
    if(a==1){
        for(int i=0;i<strlen(no);i++){
            if(no[i]=='1'){
                no[i]='0';
            }
            else{
                no[i]='1';
            }
        }
        printf("The original no =%s\n",n);
        printf("The complement =%s\n",no);
    return 0;
    }
}