#include<bits/stdc++.h>
using namespace std;
int sum(int n,int a[n])
{
    int pre[n];
    pre[0]=a[0];
    pre[n]=pre[n-1]+a[n];
    return pre[n];
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l,r;

    cin>>l>>r;
    int ans= sum(n,a[n]) - sum(r,a[n]) + sum(l-1,a[n]);
    cout<<ans; 
}