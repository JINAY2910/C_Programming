#include<stdio.h>
int totalmarks(int[],int);
int averagemarks(int,int);
int highestmarks(int[],int);
int lowestmarks(int[],int);
int main() {
    int n;
    printf("Enter No Of Student:");
    scanf("%d",&n);
    int marks[n],i,totalmark=0,maximum,minimum;
    float average=0;
    for(i=0;i<n;i++) {
        printf("Enter %d Student Mark:",i+1);
        scanf("%d",&marks[i]);
    }
    totalmark=totalmarks(marks,n);
    printf("Total Marks is: %d",totalmark);
    average=averagemarks(totalmark,n);
    printf("\nAverage is: %f",average);
    maximum=highestmarks(marks,n);
    printf("\nMaximum Mark is: %d",maximum);
    minimum=lowestmarks(marks,n);
    printf("\nLowest Mark is: %d",minimum);
    return 0;
}
int totalmarks(int m[],int n) {
    int sum=0,i;
    for(i=0;i<n;i++) {
        sum+=m[i];
    }
    return sum;
}
int averagemarks(int totalmark,int n) {
    float avg=0;
    avg=(float)totalmark/n;
    return avg;
}
int highestmarks(int m[],int n) {
    int max=m[0],i;
    for(i=1;i<n;i++) {
        if(max<m[i]) {
            max=m[i];
        }
    }
    return max;
}
int lowestmarks(int m[],int n) {
    int min=m[0],i;
    for(i=1;i<n;i++) {
        if(min>m[i]) {
            min=m[i];
        }
    }
return min;
}
