#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0){
            for(int k=0;k<i;k++)
            {
                if(k%2==0){cout<<"0"<<" ";}
                else{cout<<"1"<<" ";}
            }
               cout<<endl;
        }
        else{
            for(int l=0;l<i;l++)
            { if(l%2==0){cout<<"1"<<" ";}
                else{cout<<"0"<<" ";}

            }cout<<endl;
        }

    }
}