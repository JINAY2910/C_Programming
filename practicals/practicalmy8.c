#include<stdio.h>
int main(){
   int totalcost=0,quantity,choice;
   printf("WELCOME TO FOODIEZ\n1.Burger - 150\n2.Pizza - 200\n3.Pasta - 120\n4.Sanwitch - 100\n5.French Fries - 80\n");
   x:printf("Enter Your Choice= ");
   scanf("%d",&choice);
   switch(choice)
   {
      case 0:
         break;

      case 1:
         printf("enter the quantity= ");
         scanf("%d",&quantity);
         totalcost=(totalcost+150)*quantity;
         printf("Total Cost=%d\n",totalcost);
         goto x;

      case 2:
         printf("enter the quantity= ");
         scanf("%d",&quantity);
         totalcost=(totalcost+200)*quantity;
         printf("Total Cost=%d\n",totalcost);
         goto x;

      case 3:
         printf("enter the quantity= ");
         scanf("%d",&quantity);
         totalcost=(totalcost+120)*quantity;
         printf("Total Cost=%d\n",totalcost);
         goto x;

      case 4:
         printf("enter the quantity= ");
         scanf("%d",&quantity);
         totalcost=(totalcost+100)*quantity;
         printf("Total Cost=%d\n",totalcost);
         goto x;
      case 5:
         printf("enter the quantity= ");
         scanf("%d",&quantity);
         totalcost=(totalcost+80)*quantity;
         printf("Total Cost=%d\n",totalcost);
         goto x;

      default:
         printf("Eneter Valid Number");
         goto x;
   }
   printf("The total cost= %d",totalcost);
   return 0;
}