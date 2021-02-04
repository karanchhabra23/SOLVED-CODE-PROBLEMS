#include<stdio.h>
int main()
{
    unsigned int a= 63; //00111111
    unsigned int b= 26; //00011010
    int c ,d, e,f ;
    c= a&b;//00011010=26
    d= a|b;//00111111=63
    e= a^b;//00100101=37
    f= a<<2;

    printf("%d,%d,%d,%d", c, d, e,f);
    return 0;
}
