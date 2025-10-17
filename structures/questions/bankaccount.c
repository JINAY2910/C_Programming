#include<stdio.h>
struct bank_account{
    int acc_no;
    char name[30];
    char ifsc[12];
    float balance;
};
int main(){
    struct bank_account c1;
    printf("enter the account no = ");
    scanf("%d",&c1.acc_no);
    printf("enter the name = ");
    scanf("%s",&c1.name);
    printf("enter the IFSC code = ");
    scanf("%s",&c1.ifsc);
    printf("enter the balance = ");
    scanf("%f",&c1.balance);
    printf("\nthe account no = %d\n",c1.acc_no);
    printf("the name = %s\n",c1.name);
    printf("the IFSC code = %s\n",c1.ifsc);
    printf("the balance = %.2f\n\n",c1.balance);
    return 0;
}