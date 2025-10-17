#include<stdio.h>
int strlength(char a[]){
    int k=0;
    for(int i=0;a[i]!='\0';i++){
        k++;
    }
    return k;
}
int main(){
    char ch[100];
    printf("ENTER THE WORD: ");
    scanf("%s",&ch);
    printf("THE LENGTH OF THE STRING= %d",strlength(ch));
    return 0;
}