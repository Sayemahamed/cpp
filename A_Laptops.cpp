#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long laptop;
    cin >> laptop;
    vector<pair<long long, long long>> data(laptop);
    vector<long long>ans(laptop);
    for (auto &it : data)
    {
        cin>>it.first>>it.second;
    }
    sort(data.begin(), data.end());
    for(long long i = 0; i < data.size(); ++i)
    {
        if(data[i].first!=0)
        ans[i]=data[i].second/data[i].first;
    }
    if(is_sorted(ans.begin(), ans.end()))
    cout<<"Poor Alex";
    else cout <<"Happy Alex";
}