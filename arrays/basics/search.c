// given array & a no. x.find out if x lies in the array
//or not, if yes then print the index.
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=4,idx=-1;
    bool flag = false;// false means the element is not present
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            flag = true;// true means element is present
            idx=i;
            break;
        }
    }
    if(flag==false){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is present in the array and its index is %d",x,idx);
    }
    return 0;
}
//if only first index then use break
//if only last index then reverse loop and use break -> here ->(int i=6;i>=0;i--)
