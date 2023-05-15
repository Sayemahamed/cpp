
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
        bool flag = true;
        long long n, ans1l = 0, ans1d = 0, ans2l = 0, ans2d = 0, i = 0, x;
        cin >> n;
        while (n > 0)
        {
            if (flag)
            {
                x = 4 * i++ + 1;
                ans1l += (min(max((long long)0, n), x) + 1) / 2;
                ans1d += min(max((long long)0, n), x) / 2;
                n -= x;
                x = 4 * i++ + 1;
                ans2l += min(max((long long)0, n), x) / 2;
                ans2d += (min(max((long long)0, n), x) + 1) / 2;
                n -= x;
                flag = false;
            }
            else
            {
                x = 4 * i++ + 1;
                ans1d += min(max((long long)0, n), x) / 2;
                ans1l += (min(max((long long)0, n), x) + 1) / 2;
                n -= x;
                x = 4 * i++ + 1;
                ans2d += (min(max((long long)0, n), x) + 1) / 2;
                ans2l += min(max((long long)0, n), x) / 2;
                n -= x;
                flag = true;
            }
        }
        cout << ans1l << ' ' << ans1d << ' ' << ans2l << ' ' << ans2d << endl;
    }
}