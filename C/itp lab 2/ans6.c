#include<stdio.h>
int main()
{int i, o, t, h,th;
    printf("ENTER THE DIGIT NO.:\n ");
    scanf("%d",&i);
    th=i/1000;
    h=i/100 -10*th ;
    t=i/10-100*th - 10*h;
    o=i- 1000*th - 100*h- 10*t;
    printf("SUM OF THE DIGITS OF THE NO. IS: %d", th+h+t+o);
    return 0;
}
