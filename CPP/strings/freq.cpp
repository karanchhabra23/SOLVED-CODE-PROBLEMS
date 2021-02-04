#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int freq[26]={0};
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]-'a']++;
    }
int max=0;
char c='a';
for(int j=0;j<s.size();j++)
{
    if(freq[j]>=max)
    {max=freq[j];
    c= j+'a';}
}
cout<<c<<" "<<max;
return 0;

}