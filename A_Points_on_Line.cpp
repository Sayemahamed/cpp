#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long siz, lim, ans = 0;
    cin >> siz >> lim;
    vector<long long> dat(siz);
    for (auto &it : dat)
        cin >> it;
    for (long long i = 0; i < siz; i++)
    {
        long long k = upper_bound(dat.begin(), dat.end(),dat[i]+lim)-dat.begin()-1-i;
        ans+=(k*(k-1))/2;
    }
    cout << ans << endl;
}