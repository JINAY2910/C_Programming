#include<stdio.h>
int main(){
    int a;
    printf("enter the student's marks=");
    scanf("%d",&a);
    if(a<0 || a>100){
        printf("invalid marks");
    }
    else{
        char grade =(a >= 90)?'A':
                    (a >= 80)?'B':
                    (a >= 70)?'C':
                    (a >= 60)?'D':'F';
                    printf("the grade=%c\n",grade);
    }
    return 0;
}