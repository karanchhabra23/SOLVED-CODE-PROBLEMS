#include<bits/stdc++.h>
using namespace std;

int prime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0){return false;break;}
    }
        return true;
}
int main()
{
    int x;
    int y;
    cin>>x;
    cin>>y;
    for(int j=x;j<=y;j++){
    if(prime(j)==true){cout<<j<<endl;}
    }
    return 0;
}