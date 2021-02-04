#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int odd=0;
        int even=0;
        for(int k=0;k<n;k++)
        {
            int a;
            cin>>a;
            if(a%2==0){even+=1;}
            else{odd+=1;}
        }
        if(even>odd){cout<<odd<<endl;}
        else{cout<<even<<endl;}
    }
return 0;
}