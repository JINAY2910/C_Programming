#include<stdio.h>
int main(){
    int marks[10]={95,90,34,38,31,55,98,99,45,32};
    for(int i=0;i<=9;i++){
        if(marks[i]<=35){
            printf("roll no=%d\n",i);
        }
    }
}