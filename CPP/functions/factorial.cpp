#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int pro=1;
    for(int i=1;i<=n;i++)
    {
        pro=pro*i;
    }
    return pro;
}
int main()
{
    int a;
    cin>>a;
    cout<<fact(a);
    return 0;
}