#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d, tot, ans = 0;
    cin >> a >> b >> c >> d >> tot;
    for (long long i = 1; i <= tot; i++)
        if (!(i % a) or !(i % b) or !(i % c)or !(i % d))
            ans++;
    cout << ans;
}