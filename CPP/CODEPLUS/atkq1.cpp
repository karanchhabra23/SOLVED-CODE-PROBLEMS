#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c1,c2,c3;
    cin>>c1>>c2>>c3;
    int sum= c1+c2;
    if(c3==0){
    if(c1>c2){cout<<"Takahashi";}
        else if(c1<c2){cout<<"Aoki";}
        else if(c1=c2){cout<<"Aoki";}
    }
    else if(c3==1){
    if(c1>c2){cout<<"Aoki";}
        else if (c1<c2){cout<<"Takahashi";}
        else if(c1=c2){cout<<"Takahashi";}
    }
    return 0;

}