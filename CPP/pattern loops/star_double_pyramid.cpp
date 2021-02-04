#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            for(int j=n-i;j>=0;j--)
            cout<<"  ";
            for(int k=1;k<=i;k++)
            cout<<"* ";
            for(int m=1;m<i;m++)
            cout<<"* ";
            cout<<endl;
        }
    for(int a=n;a>=1;a--)
        {
            for(int j=n-a;j>=0;j--)
            cout<<"  ";
            for(int k=1;k<=a;k++)
            cout<<"* ";
            for(int m=1;m<a;m++)
            cout<<"* ";
            cout<<endl;
        }
}