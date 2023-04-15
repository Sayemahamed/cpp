#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
// data types//

//----------------------------------------------------------------//
// helper functions //
inline long long getMaxValue(long long &idx, vector<long long> &dat)
{
    set<long long> tmp;
    while (dat[idx] > 0 and idx < dat.size())
        tmp.insert(dat[idx++]);
    if (tmp.empty())
        return 0;
    return *tmp.rbegin();
}
inline long long getMinValue(long long &idx, vector<long long> &dat)
{
    set<long long> tmp;
    while (dat[idx] < 0 and idx < dat.size())
        tmp.insert(dat[idx++]);
    if (tmp.empty())
        return 0;
    return *tmp.rbegin();
}
//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz;
    cin >> siz;
    vector<long long> dat(siz);
    for (auto &it : dat)
        cin >> it;
    long long idx = 0, ans = 0;
    while (idx < siz)
    {
        ans += getMaxValue(idx, dat);
        ans += getMinValue(idx, dat);
    }
    cout << ans << endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
}