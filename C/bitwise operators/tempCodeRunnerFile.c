#include<stdio.h>
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fib(n-2)+fib(n-1);
}

int main()
{
    int n;
    printf("enter the term you want to find\n");
    scanf("%d",&n);
 
    printf("%dth term of the Fibonacci Sequence is %d",n,fib(n-1));
    return 0;
}