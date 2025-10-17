#include<stdio.h>
void bubblesort(int*A , int n) {
    for(int i=0;i<n-1;i++) { // for number of pass
        for(int j=0;j<n-1-i;j++){ // for comparison in pass (firstly there would n-1 comparison then n-2 and continues till n-1-i)
            if(A[j]>A[j+1]) {
int temp = A[j];
A[j] = A[j+1];
A[j+1] = temp;
}
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of items you bought:");
    scanf("%d", &n);
    int A[n];
    for(int i=0; i<n;i++){
        printf("Enter the price of product %d :", i+1);
        scanf("%d", &A[i]);
    }
    printf("sorted array \n");
    bubblesort(A,n);
    for(int i=0;i<n;i++) {
        printf(" %d\t", A[i]);
    }
return 0;
}