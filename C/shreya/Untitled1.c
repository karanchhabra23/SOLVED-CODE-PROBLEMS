#include<stdio.h>
int main()
{

    int a,b;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    printf("NUMBER BEFORE SWAP: %d   %d  \n" , a, b );
    a=a+b;
    b=a-b;
    a=(a-b)/2;

    printf("number after swapping: %d   %d   \n", a , b);
    return 0;
}
