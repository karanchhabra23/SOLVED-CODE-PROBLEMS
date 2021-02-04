#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rows, col;
    cout<<"enter rows: ";
    cin>>rows;
    cout<<"enter columns: ";
    cin>>col;

    for(int i=0;i<col;i++)
       { cout<<"*";}
        cout<<"\n";
    for(int j=0;j<(rows-2);j++)
    {
        cout<<"*";
        for(int k=0;k<col-2;k++){cout<<" ";}
        cout<<"*";
        cout<<"\n";
    }
    for(int i=0;i<col;i++)
       { cout<<"*";}
return 0;
}