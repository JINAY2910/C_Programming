#include<stdio.h>
int main(){
    int arr[5]={44,92,38,48,58};
    int *ptr = arr;// same as int *ptr = &arr[0];
    for(int i=0;i<5;i++){
        printf("the value at index %d = %d\n",i,arr[i]);
        printf("the value at index %d = %d\n",i,*ptr);
        ptr++;
    }
    return 0;
}
//  for(int i=0;i<5;i++){
//      printf("the value at index %d = %d\n",i,arr[i]);
//      printf("the value at index %d = %d\n",i,*(ptr+i));
//  }           
//this loop is same as above.
//Note -> *(ptr+i) is not equal to *ptr+i