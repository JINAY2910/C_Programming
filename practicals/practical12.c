#include<stdio.h>
int main(){
    int tb=0,even=200;
    for(int i=1;i<=100;i++){
        if(i%2==0){
            tb+=200;
        }
        else{
            tb+=0;
        }
    }
    printf("the total budget=%d",tb);
    return 0;
}