#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>=0;j--)
        cout<<" ";
        for(int k=0;k<i;k++)
        cout<<a[k]<<" ";
        for(int j=n-i;j>=0;j--)
        cout<<" ";
        cout<<endl;
    }
}