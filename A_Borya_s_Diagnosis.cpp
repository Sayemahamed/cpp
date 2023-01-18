#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long doctors, ans = 0;
    cin >> doctors;
    while (doctors--)
    {
        long long x, y, i = 0;
        cin >> x >> y;
        while (x + y * i <= ans)
            i++;
        ans = x + y * i;
    }
    cout << ans << endl;
}