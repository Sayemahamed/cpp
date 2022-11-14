#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    while (q--)
    {
        int x, ans = 0;
        string s;
        cin >> x;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            int fr[10], cnt = 0, frmax = 0;
            for (int j = 0; j < 10; j++)
                fr[j] = 0;
            for (int j = i; j < s.size(); j++)
            {
                if (!fr[s[j] - '0'])
                    cnt++;
                fr[s[j] - '0']++;
                frmax = max(frmax, fr[s[j] - '0']);
                if (frmax > 10)
                    break;
                if (frmax <= cnt)
                    ans++;
            }
        }
        cout << ans << '\n';
    }
}
