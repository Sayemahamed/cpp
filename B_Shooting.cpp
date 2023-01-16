#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long size, ans = 0, j = 0;
    cin >> size;
    vector<pair<long long, long long>> dat(size);
    for (long long i = 1; i <= size; i++)
    {
        cin >> dat[i - 1].first;
        dat[i - 1].second = i;
    }
    sort(dat.rbegin(), dat.rend());
    for (auto &it : dat)
    {
        ans += (it.first * (j++)) + 1;
    }
    cout << ans << endl;
    for (auto &it : dat)
        cout << it.second << ' ';
}