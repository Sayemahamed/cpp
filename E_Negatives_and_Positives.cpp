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
        long long size, cnt = 0, mn = INTMAX_MAX, sum = 0;
        cin >> size;
        vector<long long> dat(size);
        for (auto &it : dat)
        {
            cin >> it;
            if (it < 1)
                cnt++;
            it = abs(it);
            mn = min(mn, it);
            sum += it;
        }
        if (cnt & 1)
            cout << sum - 2 * mn << endl;
        else
            cout << sum << endl;
    }
}