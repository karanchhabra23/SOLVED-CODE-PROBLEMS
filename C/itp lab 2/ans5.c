#include<stdio.h>
int main()
{
    float h,a,i;
    int f,c;
    printf("Enter height in metres:\n");
    scanf("%f",&h);
    c=100*h;
    i=c/2.54;
    f=i/12;
    a=i-(12*f);

     printf("HEIGHT IS %d FEET %.2f INCHES",f,a);
     return 0;
}
