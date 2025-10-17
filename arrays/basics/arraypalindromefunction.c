#include<stdio.h>
void palindrome(int a[]){
    int i=0,j=6;
    while(i<j){
        if(a[i] != a[j]){
            printf("not a palindrome");
            break;//if we use "return;" here then no need to use if condn outside the loop. 
        }
        i++;
        j--;
    }
    if(i==j){//this condn make sure that the loop completed without any mismatch(any break).
    printf("Palindrome");//we can also use the condn "i>=j" here to avoid overthinking.
    }
}
int main(){
    int arr[7]={1,2,3,4,3,2,1};
    palindrome(arr);
    return 0;
}