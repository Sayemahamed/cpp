#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, ans = 0, cnt = 0, flag = true;
    cin >> n;
    vector<long long> dat(n);
    for (auto &it : dat)
    {
        cin >> it;
        if (it < 0)
            cnt++;
        else if (it == 0)
            flag = false;
        ans += abs(abs(it) - 1);
    }
    if (cnt & 1 and flag)
        ans += 2;
    cout << ans;
}