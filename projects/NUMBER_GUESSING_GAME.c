#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int random_no=(rand()%100)+1;
    int user_no=0;
    int count = 0;
    printf("\nWELCOME TO THE NUMBER GUESSING GAME\n");
    printf("guess a no. b/w 1 to 100 = ");
    while(user_no != random_no){
        scanf("%d",&user_no);
        if(user_no > random_no && user_no <= 100 && user_no >= 1){
            printf("\nlower your no.\nthe new no. = ");
        }
        else if(user_no < random_no && user_no <= 100 && user_no >= 1){
            printf("\nhigher your no.\nthe new no. = ");
        }
        else if(user_no == random_no){
            count++;
            printf("\nCONGRATS!! YOU GUESSED THE CORRECT NUMBER = %d\n",random_no);
            printf("YOU GUESSED THE NUMBER IN %d GUESSES\n\n",count);
            break;
        }
        else{
            printf("\nenter a valid no\n");
            printf("guess a no. b/w 1 to 100 = ");
            count--;
        }
        count++;
    }
    return 0;
} 
