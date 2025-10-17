#include<stdio.h>
int strcopy(char str1[],char str2[]){
    int i;
    for(i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    str2[i]='\0';
    return 0;
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
    printf("the source string = %s\n",str1);
    printf("copied string in target string = %s",str2);
    return 0;
}