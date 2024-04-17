#include<bits/stdc++.h>
using namespace std;
bool Compare(pair<long long, long long> a, pair<long long, long long> &b)
{
    return a.first > b.first;
}
int main()
{
    long long limit,query,ans=0;
    cin>>limit>>query;
    vector<pair<long long,long long>> data;
    for (long long i=0;i<query;i++)
    {
        long long x,y;
        cin>>x>>y;
        data.push_back({y,x});
    }
    sort(data.begin(),data.end(),Compare);
    for(auto &it:data)
    {
    // cout<<it.first<<" "<<it.second<<endl;
    if(limit>=it.second)
    {
        limit-=it.second;
        ans+=it.second*it.first;
    }
    else if(limit>0)
    {
        while(limit>0&&it.second>0)
        {
            it.second--;
            limit--;
            ans+=it.first;
        }
    }
    }
    cout<<ans<<endl;
}