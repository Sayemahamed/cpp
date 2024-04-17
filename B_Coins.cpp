#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <char, int> data;
    bool flag=true;
    data['A']=data['B']=data['C']=0;
    for (int i =0; i<3;i++)
    {
        string s;
        cin >> s;
        if(s[1]=='>')
        data[s[0]]++;
        else data[s[2]]++;
        // cout<<s<<endl;
    }
    for(auto &it : data)
    {
        if(it.second!=1)flag=false;
    }
    if(flag)
    {
        cout<<"Impossible"<<endl;
    }
    else
    {
        for(long i=0;i<data.size();i++)
        {
            for(auto &it:data)
            {
                if(it.second==i)cout<<it.first;
            }
        }
    }
}