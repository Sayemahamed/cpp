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
        long long goal, mice, ans = 0, cat = 0;
        cin >> goal >> mice;
        vector<long long> loncations(mice);
        for (auto &it : loncations)
            cin >> it;
        sort(loncations.rbegin(), loncations.rend());
        for (long long i = 0; i < loncations.size(); i++)
        {
            if (cat >= loncations[i])
                break;
            ans++;
            cat += goal - loncations[i];
        }
        cout << ans << endl;
    }
}