#include<stdio.h>
//function prototype
void good_morning();
void good_afternoon();
void good_evening();

//functon definition
void good_morning(){
    printf("good morninig\n");

}
void good_afternoon(){
    printf("good afternoon\n");
    
}
void good_evening(){
    printf("good evening\n");
    
}

//function calling
int main(){
    good_morning();
    good_afternoon();
    good_evening();
}