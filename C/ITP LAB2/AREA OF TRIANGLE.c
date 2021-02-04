#include<stdio.h>
int main()
{
    float a,b,area;
    printf("ENTER HEIGHT OF TRIANGLE:\n");
    scanf("%f",&a);
    printf("ENTER LENGHT OF BASE OF TRIANGLE:\n");
    scanf("%f",&b);

    area= (a*b)/2;
    printf("AREA OF TRIANGLE IS : %f",area);
    return 0;
}
