#include<stdio.h>
int main(){
    int arr[5]={2,4,6,8,1};
    arr[4]=100;//{2,4,6,8,100}
    arr[1]=1;//{2,1,6,8,100}
    printf("%d",arr[2]);
    return 0;
}
// we can also create char and float array
//in this array index of element goes from 0 to 4
//in this array position of elements goes from 1 to 5
//it's okay if we don't define the size of an  1D array