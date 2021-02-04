#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    int a[n];
    a[0]=0;
    a[1]=1; //first 2 initialised
    for(int i=2; i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    return a[n-1];

}
int main()
{
    int a;
    cin>>a;
    for(int j=1;j<=a;j++)
    {
        cout<<fib(j)<<endl;
    }
    return 0;
}