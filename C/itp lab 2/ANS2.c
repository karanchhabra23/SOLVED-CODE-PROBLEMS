#include <stdio.h>
#include <math.h>
int main()
{
 int a,b=1,i,j;
 printf("Enter the number of numbers to multiply:\n");
 scanf("%d",&a);
 for(i=0;i<a;i++)
 {
 printf("Type next number \n");
 scanf("%d",&j);
 b=b*j;
 }
 printf("The product of given %d numbers are %d",a,b);
}
