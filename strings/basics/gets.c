#include<stdio.h>
int main(){ 
    char str[30];
    gets(str);//the entered string is stored in str
    puts(str);//prints the string & places the cursor on the next line
    printf("Hey");
    return 0;
}
//we should use fgets instead of gets bcoz of buffer overflow problem.