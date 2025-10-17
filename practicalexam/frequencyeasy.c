#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char id[20];
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
    printf("enter the ID :");
    scanf("%s",&id);
    for(int i=0;i<strlen(id);i++){
        if(id[i]<0 || !isdigit(id[i])){
            printf("Invalid Input");
            return 0;
        }
    }
    for(int i=0;i<strlen(id);i++){
        if(id[i]=='0'){
            a++;
        }
        if(id[i]=='1'){
            b++;
        }
        if(id[i]=='2'){
            c++;
        }
        if(id[i]=='3'){
            d++;
        }
        if(id[i]=='4'){
            e++;
        }
        if(id[i]=='5'){
            f++;
        }
        if(id[i]=='6'){
            g++;
        }
        if(id[i]=='7'){
            h++;
        }
        if(id[i]=='8'){
            i++;
        }
        if(id[i]=='9'){
            j++;
        }
    }
    printf("Digit %d: %d times\n",0,a);
    printf("Digit %d: %d times\n",1,b);
    printf("Digit %d: %d times\n",2,c);
    printf("Digit %d: %d times\n",3,d);
    printf("Digit %d: %d times\n",4,e);
    printf("Digit %d: %d times\n",5,f);
    printf("Digit %d: %d times\n",6,g);
    printf("Digit %d: %d times\n",7,h);
    printf("Digit %d: %d times\n",8,i);
    printf("Digit %d: %d times\n",9,j);
    return 0;
}