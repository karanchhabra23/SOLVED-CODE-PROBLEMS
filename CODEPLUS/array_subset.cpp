void f(vector<int> v, int idx)
{
    if(idx==a.size())
    {
        for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
            cout<<endl;
        return;
    }

    f(v, idx+1); //

    v.push_back(a[idx]); // 

    f(v, idx+1);
}