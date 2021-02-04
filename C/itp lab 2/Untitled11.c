#include<stdio.h>
#include<conio.h>
int main()
{int u,w,x;
 int v,y;
    int a=2;
    int b=3;
    int c=4;
    int d=5;
    int e=6;
    int f=7;
    u=a+b*c/d-e%f;
    v=(a+b)>=c;
    w=a&&b;
    x=a&b;
    y=a&c;

    printf("%d %d %d %d %d",u,v,w,x,y);
    return 0;

}
