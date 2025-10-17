#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the size of the string: ");
    scanf("%d",&n);
    char ch[n];
    printf("ENTER THE WORD TO TOGGLE: ");
    scanf("%s",&ch);
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]<97){
            ch[i]=ch[i]+32;
        }
        else{
            ch[i]=ch[i]-32;
        }
    }
    printf("THE TOGGLED WORD: %s\n",ch);
    return 0;
}