//imp concept
#include<stdio.h>
void reverse(int a[]){
    int i=0;
    int j=6;
    while(i<j){            //for(int i=0,j=6;i<j;i++;j--)
        int temp=a[i];     //we can also use "i<=j" condn
        a[i]=a[j];         //we can also use for loop          
        a[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr);
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}