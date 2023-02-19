#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long ans=0,rooms;
    cin >> rooms;
    while (rooms--)
    {
        long long x, y;
        cin >> x >> y;
        if (y - x > 1)
            ans++;
    }
    cout << ans << endl;
}