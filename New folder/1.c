#include<stdio.h>

int main()
{
    int a[301];
    for(int i=1;i<301;i++)
    {
        a[i]=i;
    }
    for(int i=2;i<301;i++)
    {
        for(int j=i*i;j<301;j+=i)
        {
            a[j]=0;
        }
    }
printf("prime numbers in 1 to 300 are\n");
    for(int i=2;i<301;i++)
    {
        if(a[i]!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
