#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long enemies, myX, myY;
    cin >> enemies >> myX >> myY;
    set<pair<long long, long long>> ans;
    while (enemies--)
    {
        long long x, y;
        cin >> x >> y;
        long long div = __gcd((myX - x), (myY - y));
        ans.insert({(myX - x) / div, (myY - y) / div});
    }
    cout << ans.size() << endl;
}