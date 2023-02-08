#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long siz, ans = 0;
    cin >> siz;
    vector<long long> dat(siz);
    for (long long i = 0; i < siz; i++)
    {
        cin >> dat[i];
        if (i>0)
            dat[i] += dat[i - 1];
    }
    for (long long i = 0; i < siz - 1; i++)
    {
        if (dat[i]*2 == dat[siz - 1])
            ans++;
    }
    cout << ans;
}