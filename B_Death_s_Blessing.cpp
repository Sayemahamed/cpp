#include <bits/stdc++.h>
using namespace std;
bool comp(pair<long long, long long> &a, pair<long long, long long> &b)
{
    return a.second < b.second;
}
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long enemy, ans = 0;
        cin >> enemy;
        vector<long long> dat(enemy);
        vector<pair<long long, long long>> mainData;
        for (long long i = 0; i < enemy; i++)
            cin >> dat[i];
        for (long long i = 0; i < enemy; i++)
        {
            long long x;
            cin >> x;
            mainData.push_back({dat[i], x});
        }
        sort(mainData.begin(), mainData.end(), comp);
        // for(auto&it: mainData)cout<<it.first<<" "<<it.second<<endl;
        // cout    << endl;
        for (long long i = 0; i < enemy; i++)
        {
            ans += mainData[i].first;
            if(i!=enemy-1)
            ans += (mainData[i].second);
        }
        cout << ans << endl;
    }
}