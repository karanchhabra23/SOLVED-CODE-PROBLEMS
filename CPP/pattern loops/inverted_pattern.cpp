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
    for(int j=n;j>=1;j--)
    {
            for(int k=0;k<j;k++)
            {
                cout<<a[k]<<" ";
            }
        cout<<endl;
    }
}