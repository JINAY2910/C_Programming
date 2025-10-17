#include<stdio.h>
#include<string.h>
int main(){
    char ch[21];
    printf("enter the no =");
    scanf("%s",ch);//In string & is not required
    int n = strlen(ch);
    if(n<2){
        printf("Invalid Input");
    }
    else{
        int temp= ch[0];
        ch[0]=ch[n-1];
        ch[n-1]=temp;
        printf("the encrypted no =%s",ch);
    }
    return 0;
}