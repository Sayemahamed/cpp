#include <bits/stdc++.h>
using namespace std;
map<long long, long long> span;
void add_span(long long j, vector<long long> &dat)
{
    span[dat[j]]++;
}
void remove_span(long long i, vector<long long> &dat)
{
    span[dat[i]]--;
    if (span[dat[i]] <= 0)
        span.erase(span.find(dat[i]));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long siz, j = 0, ans = 0;
    cin >> siz;
    vector<long long> dat(siz);
    for (auto &it : dat)
        cin >> it;
    for (long long i = 0; i < siz; i++)
    {
        if (span.empty() and j < siz)
            add_span(j++, dat);
        while ((span.rbegin()->first - span.begin()->first) <= 1 and j < siz and abs(span.rbegin()->first - dat[j]) <= 1 and abs(span.begin()->first - dat[j]) <= 1)
            add_span(j++, dat);
        ans = max(ans, j - i);
        remove_span(i, dat);
    }
    cout << ans << endl;
}