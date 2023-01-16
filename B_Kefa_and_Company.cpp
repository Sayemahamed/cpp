#include <bits/stdc++.h>
using namespace std;
long long sum;
map<long long, long long> datM;
void add(long long j, vector<pair<long long, long long>> &dat)
{
    datM[dat[j].first]++;
    sum += dat[j].second;
}
void remove(long long i, vector<pair<long long, long long>> &dat)
{
    datM[dat[i].first]--;
    if (datM[dat[i].first] <= 0)
        datM.erase(datM.find(dat[i].first));
    sum -= dat[i].second;
}
int main()
{
    long long friends, maxDifference, j = 0, ans = 0;
    cin >> friends >> maxDifference;
    vector<pair<long long, long long>> dat(friends);
    for (auto &it : dat)
        cin >> it.first >> it.second;
    sort(dat.begin(), dat.end());
    for (long long i = 0; i < friends; i++)
    {
        if (datM.empty() and j < friends)
            add(j++, dat);
        while (abs(datM.rbegin()->first - datM.begin()->first) < maxDifference and abs(datM.rbegin()->first - dat[j].first) < maxDifference and abs(datM.begin()->first - dat[j].first) < maxDifference and j < friends)
            add(j++, dat);
        ans = max(ans, sum);
        remove(i, dat);
    }
    cout << ans << endl;
}