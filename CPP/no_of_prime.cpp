#include<iostream>
using namespace std;
int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    for(int i=a;i<b;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0){
            
                break;
            }
            else{
                sum=sum +1;
                break;
            }
        }
    }
    cout<<sum;
    return 0;
}