#include<stdio.h>
#include<string.h>
#define n 5
#define z 100
int main(){
    char names[n][z];
    char temp[z];
    int i,j;
    printf("Enter the name of %d students: \n",n);
    for(i=0;i<n;i++){
        printf("Student %d name: ",i+1);
        fgets(names[i],z,stdin);
        names[i][strcspn(names[i],"\n")]='\0';
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(strcmp(names[j],names[j+1])>0){
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }
    printf("\nSorted name list of students in alphabetical order:\n");
    for(i=0;i<n;i++){
        printf("%d. %s\n",i+1,names[i]);
    }
return 0;
}