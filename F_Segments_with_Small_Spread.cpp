#include <bits/stdc++.h>
using namespace std;
map<long long, long long> span;
void add(long long j, vector<long long> &dat)
{
    span[dat[j]]++;
}
void remove(long long i, vector<long long> &dat)
{
    span[dat[i]]--;
    if (span[dat[i]] <= 0)
    {
        span.erase(span.find(dat[i]));
    }
}
int main()
{
    long long siz, upperLimit, j = 1, ans = 0;
    cin >> siz >> upperLimit;
    vector<long long> dat(siz);
    for (auto &it : dat)
    {
        cin >> it;
    }
    add(0, dat);
    for (long long i = 0; i < siz; i++)
    {
        while (span.rbegin()->first - span.begin()->first <= upperLimit and j < siz)
            add(j++, dat);
        if (span.rbegin()->first - span.begin()->first > upperLimit and j < siz)
            remove(i, dat);
        if (span.rbegin()->first - span.begin()->first <= upperLimit)
            ans += j - i;
        remove(i, dat);
    }
    cout << ans << endl;
}