#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="Deep";
    char s2[]="Joke";
    printf("%d",strcmp(s1,s2));
    return 0;
}
//strcmp("Deep","Deep"); -> Zero Value
//strcmp("Deep","Joke"); -> Negative Value
//strcmp("Joke","Deep"); -> Positive Value
//The comparison is done on the basis of corresponding ASCII values of characters
//remember -> DJ is negative