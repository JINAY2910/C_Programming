#include<stdio.h>
struct date{
    int dd;
    int mm;
    int yyyy;
};
int compare(struct date d1,struct date d2){
    //if d1 is in future the return 1,if d2 is in future the return -1,if 1 and d2 are same then return 0.
    if(d1.dd==d2.dd && d1.mm==d2.mm && d1.yyyy==d2.yyyy){
        return 0;
    }
    else if(d1.yyyy>d2.yyyy){
        return 1;
    }
    else if(d1.yyyy<d2.yyyy){
        return -1;
    }
    else if(d1.mm>d2.mm){
        return 1;
    }
    else if(d1.mm<d2.mm){
        return -1;
    }
    else if(d1.dd>d2.dd){
        return 1;
    }
    else if(d1.dd<d2.dd){
        return -1;
    }
    //if none condition match
    return 0;
}
int main(){
    struct date d1 = {30,10,2006};
    struct date d2 = {24,10,2006};
    printf("%d",compare(d1,d2));
    return 0;
}