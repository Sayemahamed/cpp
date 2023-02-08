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
        string s;
        cin >> s;
        long long ans = 0, tmp = 0;
        for (auto &it : s)
            if (it == 'L')
                tmp++;
            else
            {
                ans = max(tmp, ans);
                tmp = 0;
            }
        ans = max(ans, tmp);
        cout << ans+1 << endl;
    }
}