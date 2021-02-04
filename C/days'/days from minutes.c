#include<stdio.h>
int main()
{
    int minutes, minutes_in_year=60*24*365;
    double years, days;
    printf("ENTER MINUTES:");
    scanf("%d",&minutes);

    years= (double)minutes/(double)minutes_in_year;

    days=(double)minutes/(60*24);

    printf("NO. of days: %lf\n",days);
    printf("NO OF YEARS: %lf\n",years);
    return 0;
}
