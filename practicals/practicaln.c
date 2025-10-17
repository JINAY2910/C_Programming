#include<stdio.h>
struct scorecard{
char name[50];
int runs;
int balls;
float strikerate;
}a,b,c,d;
int main(){
    int n;
    printf("enter the number of the players :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the name of the player :");
        scanf("%s",&a.name);
        printf("enter the runs of the player :");
        scanf("%d",&b.runs);
        printf("enter the balls taken by the player :");
        scanf("%d",&c.balls);
         d.strikerate=(b.runs/c.balls)*100;
        printf("----player name:%s----\n\tscore:%d\n \tballs:%d\n \tstrikerate:%f\n",a.name,b.runs,c.balls,d.strikerate);
    }
}