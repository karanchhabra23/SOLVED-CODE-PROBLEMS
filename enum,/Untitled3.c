#include<stdio.h>
#include<stdlib.h>
void main()
{
    enum Company {GOOGLE, FACEBOOK ,XEROX,YAHOO, EBAY, MICROSOFT };

    enum Company a = XEROX;
    enum Company b = GOOGLE;
    enum Company c = EBAY;

    printf(" %d, %d, %d", a, b,c);

}

