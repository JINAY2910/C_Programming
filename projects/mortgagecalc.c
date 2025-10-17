//this is the code to calculate mortgage.

/* the formula used for monthly payment is
            mp= loan * n/12 * ((1+(n/12))^n/(((1+(n/12))^n)-1)
we have replaced the n\12 with c for ease of calculation and understanding
now we also need the user to know the interest.
            interest = loan * c
the principle amount every month
            p = mp - 1
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float loan,interest; // n is the number of years, interest is in per annum
    int i=2,months;
    printf("Enter the amount of loan:");
    scanf("%f",&loan);
    printf("Enter the rate of interest per annum:");
    scanf("%f",&interest);
    printf("Enter the number of months for which the loan was provided:");
    scanf("%d",&months);
    interest = interest/(100*12); // converting yearly interest into monthly interest
    float temp = pow(1+ interest,months);
    float mp = (loan*interest*temp)/(temp-1);
    float interest_paid = loan*interest;
    float prin_paid = mp- interest_paid;

    printf("\nFor month: 1\n");
    printf("monthly payment = %f \nprinciple amount paid = %f \ninterest paid = %f \n",mp,prin_paid,interest_paid);
    for(i=2;i<=months;i++)
    {
        printf("\nFor month: %d\n",i);
        loan = loan - prin_paid; // new loan
        interest_paid = loan*interest; // new interest
        prin_paid = mp- interest_paid; // new principle amount
        printf("monthly payment = %f \nprinciple amount paid = %f \ninterest paid = %f \n",mp,prin_paid,interest_paid);
    }
}   
