#include<stdio.h>
int main(){
    char str[]="abc";
/*  for(int i=0;i<3;i++){
        printf("%c",str[i]);
    }   */
    printf("%s\n",str);
    printf("%u\n",str);
    printf("%u\n",&str);
    return 0;   
}