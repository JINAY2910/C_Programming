#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char id[100];
    int frequency[20]={0};
    int a=1;
    printf("enter the transaction ID :");
    scanf("%s",id);
    for(int i=0;i<strlen(id);i++){
        if(!isdigit(id[i]) || id[i]<0){
            printf("Invalid Input");
            a=0;
            break;
        }
    }
    if(a==1){
        for(int i=0;i<strlen(id);i++){
            int digit = id[i]-'0';
            frequency[digit]++;
        }
        printf("Digit frequencies");
        for(int i=0;i<10;i++){
            if(frequency[i]>0){
            printf("Digit %d: %d\n",i,frequency[i]);
            }
        }
    }
    return 0;
}