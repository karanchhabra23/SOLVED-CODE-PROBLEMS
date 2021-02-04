/* n=4;
1 
1 1
1 2 1
1 3 3 1
1 4 10 10 4 1
*/
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
int nCr()
{
    int n;`
    int r;
    cin>>n; 
    int nCr=fact(n)/((fact(r))*fact(n-r))
    
    



