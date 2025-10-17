#include<stdio.h>
#include<string.h>
void strcopy(char str1[],char str2[]){
    int i;
    for(i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    str2[i]='\0';
}
int main(){
    int n;
    printf("enter the size of string=");
    scanf("%d",&n);
    char str1[n];
    char str2[n];
    printf("enter the source string =");
    scanf("%s",str1);
    strcopy(str1,str2);
    printf("Source String: %s\n",str1);
    printf("Target String: %s\n",str2);
    return 0;
}