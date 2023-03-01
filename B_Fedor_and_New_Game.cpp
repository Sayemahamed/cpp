#include <bits/stdc++.h>
using namespace std;
long long bitCount(long long n,long long a)
{
    long long ans = 0;
    while (n and a--)
    {
        if (n & 1)
            ans++;
        n >>= 1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, p, k, ans = 0;
    cin >> n >> p >> k;
    vector<long long> dat(p + 1);
    for (auto &it : dat)
        cin >> it;
    for (long long i = 0; i < p; ++i)
        if (bitCount(dat[i]^dat[p],n) <= k)
            ans++;
    cout << ans;
}