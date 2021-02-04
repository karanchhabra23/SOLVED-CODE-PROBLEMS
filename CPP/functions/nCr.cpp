#include<bits/stdc++.h>
using namespace std;

int fact(int a)
{
    int pro=1;
    for(int i=1;i<=a;i++)
    {
        pro=pro*i;
    }
    return pro;
}
int main()
{
    int n;
    int r;
    cin>>n>>r; 
    int x= fact(n);
    int y= fact(r);
    int z= fact(n-r);

    int nCr= x/(y*z);
    cout<<nCr; 
    return 0;
}
