#include<stdio.h>
int main()
{
    int n,fac=1;
    printf("enter number to find factorial\n");
    scanf("%d",&n);
    if(n>0){
        for(int i=1;i<=n;i++){
        fac=fac*i;}
    }
    else if(n=0){fac=1;}

    printf("factorial is %d",fac);
    return 0;
}