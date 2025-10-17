#include<stdio.h>
int main()
{
    float popl=1441981744,wom_per=48.4/100,men_per=1-wom_per;
    float total_literacy=85.95/100,male_literacy_rate=80.95/100,female_literacy_rate=62.84/100;
    float total_women,total_men,literate_men,literate_women,illiterate_men,illiterate_women;
    total_men=popl*men_per;
    total_women=popl*wom_per;
    literate_men=total_men*male_literacy_rate;
    literate_women=total_women*female_literacy_rate;
    illiterate_men=total_men-literate_men;
    illiterate_women=total_women-literate_women;
    printf("the illiterate men=%f",illiterate_men);
    printf("\nthe illiterate women=%f",illiterate_women);
    return 0;
}