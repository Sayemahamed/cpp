#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long child, mx, ans = 0;
    cin >> child >> mx;
    vector<long long> dat(child);
    vector<bool> isTaken(child+7, 0);
    for (auto &it : dat)
        cin >> it;
    sort(dat.begin(), dat.end());
    for (long long i = 0; i < child; i++)
    {
        if (isTaken[i])
            continue;
        long long j = child;
        while (dat[--j] + dat[i] > mx and j >= i)
            ;
        isTaken[i] = true;
        isTaken[j] = true;
        if (dat[i] <= mx)
            ans++;
    }
    cout << ans << endl;
}