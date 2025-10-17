#include<stdio.h>
int main(){
    int a1[5]={1,2,3,4,5};
    int a2[3]={6,7,8};
    int m[8];
    for(int i=0;i<8;i++){
        if(i<5){
            m[i]=a1[i];
        }
        else{
            m[i]=a2[i-5];
        }
    }
    for(int i=0;i<8;i++){
        printf("%d ",m[i]);
    }
}