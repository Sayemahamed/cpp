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
    for (auto &it : dat)
        cin >> it;
    sort(dat.begin(), dat.end());
    long long i = 0, j = child - 1;
    while (i <= j)
    {
        ans++;
        if (dat[i] + dat[j] <= mx)
        {
            j--;
            i++;
        }
        else
            j--;
    }
    cout << ans << endl;
}