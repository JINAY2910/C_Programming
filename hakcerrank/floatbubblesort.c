#include<stdio.h>
int main(){
    float a[2]={9.9,9.11};
    for(int i=0;i<2-1;i++){
        for(int j=0;j<2-i-1;j++){
            if(a[j]>a[j+1]){
                float temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("ascending order = ");
    for(int i=0;i<2;i++){
        printf("%f ",a[i]);
    }
}