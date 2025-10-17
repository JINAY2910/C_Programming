//if the passed variable is changed inside the function, the function call doesn't 
//change the value in the calling function
#include<stdio.h>
int change(int a){
    a=77;//misnomer
    return 0;
}
int main(){
    int b=22;
    change(b);// the value of b remains 22
    printf("b is %d",b);
    return 0;
}
//this happens because a copy of 'b' is passed to change the function