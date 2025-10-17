#include<stdio.h>
struct book{
    char title[50];
    char author[50];
    float amount;
}a,b,c;
int main(){
printf("enter the title of the book :");
fgets(a.title,50,stdin);
printf("enetr the name of the author :");
fgets(b.author,50,stdin);
printf("enter the amount of the book :");
scanf("%f",&c.amount);
printf("\ntitle of the book is %s\n",a.title);
printf("\nthe name of the author is %s\n",b.author);
printf("\namount of the book is %f\n\n",c.amount);
}