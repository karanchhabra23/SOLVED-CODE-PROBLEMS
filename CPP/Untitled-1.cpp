#include<stdio.h>
int main()
{
 int a[25];
 for (int i = 0; i < 25; i++)
 {
 scanf("%d",&a[i]);
 }
 int b;
 printf("Enter the number you want to search ");
 scanf("%d",&b);
 int freq=0;
 for (int i = 0; i < 25; i++)
 {
 if (b==a[i])
 {freq=freq+1;}
 }
 if (freq==0)
 {
printf("This number is not present in the array");
}
 else
{
printf("the number %d is present and the number %d appeared  %d   times",b,b,freq);
}
return 0;
}
