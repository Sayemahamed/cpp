#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<long, long> a, pair<long, long> b)
{
    return a.second < b.second;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long exams, limit, minNeed, sum = 0, ans = 0;
    cin >> exams >> limit >> minNeed;
    vector<pair<long long, long long>> dat(exams);
    for (auto &it : dat)
        cin >> it.first >> it.second, sum += it.first;
    sort(dat.begin(), dat.end(), cmp);
    long long temp = minNeed * exams;
    for (auto &it : dat)
    {
        // cout << it.first << ' ' << it.second << endl;
        if (sum >= temp)
            break;
        if (it.first < limit)
        {
            ans += it.second * min(temp - sum, limit - it.first);
            sum += min(temp - sum, limit - it.first);
        }
    }
    cout << ans << endl;
}