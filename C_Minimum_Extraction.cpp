#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        long long siz;
        cin >> siz;
        vector<long long> dat(siz);
        for (auto &it : dat)
            cin >> it;
        sort(dat.begin(), dat.end());
        long long ans = dat[0];
        for (long long i = 1; i < siz; i++)
            ans = max(ans, dat[i] - dat[i - 1]);
        cout << ans << endl;
    }
}