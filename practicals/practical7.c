#include<stdio.h>
int main()
{
    long int ram_bun=12000000,ram_plot=6000000,ram_car=3000000;
    long int sum_apt=11000000,sum_hotel=8000000,sum_car=8000000;
    long int ram_total,sum_total;
    ram_total=ram_bun+ram_plot+ram_car;
    sum_total=sum_apt+sum_hotel+sum_car;
    printf("Raman's wealth=%d",ram_total);
    printf("\nSuman's wealth=%d",sum_total);
    if(ram_total>sum_total)
    {
        printf("\nRaman is wealthier than Suman");
    }
    else if(ram_total<sum_total)
    {
        printf("\nSuman is wealthier than Raman");
    }
    else
    {
        printf("\nRaman and Suman both are equally wealthier");
    }
}