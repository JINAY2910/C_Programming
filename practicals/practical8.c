#include<stdio.h>
int main()
{
    int choice,quantity;
    printf("Hello!Welcome To Foodies Park ");
    int totalcost=0;
    printf("\n1.Burger-Rs.150 \n2.Pizza-Rs.200 \n3.Pasta-Rs.120 \n4.Sandwich-Rs.100\n5.Franch Fries-Rs.80");
        x:printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 0:
            break;
        case 1:
            printf("Enter your quantity:");
            scanf("%d",&quantity);
            totalcost=(totalcost+150)*quantity;
            printf("your total burger cost is:%d",totalcost);
            printf("your quantity:%d",quantity );
            goto x;
        case 2:
            printf("Enter your quantity:");
            scanf("%d",&quantity);
            totalcost=(totalcost+200)*quantity;
            printf("your total pizza cost is:%d",totalcost);
            printf("your quantity:%d",quantity );
            goto x;
        case 3:
            printf("Enter your quantity:");
            scanf("%d",&quantity);
            totalcost=(totalcost+120)*quantity;
            printf("your total pasta cost is:%d",totalcost);
            printf("your quantity:%d",quantity );
            goto x;
        case 4:
            printf("Enter your quantity:");
            scanf("%d",&quantity);
            totalcost=(totalcost+100)*quantity;
            printf("your total sandwich cost is:%d",totalcost);
            printf("your quantity:%d",quantity );
            goto x;
        case 5:
            printf("Enter your quantity:");
            scanf("%d",&quantity);
            totalcost=(totalcost+80)*quantity;
            printf("your total franchfries cost is:%d",totalcost);
            printf("your quantity:%d",quantity );
            goto x;
        default:
            printf("enter valid number");
            goto x;
        }
    printf("your total cost is:%d",totalcost);
    return 0;
}