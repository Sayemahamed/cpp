#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, l, r, x, y, a, b;
    cin >> t;
    while (t--)
    {
        cin >> l >> r >> x;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        if (b == a)
            cout << 0 << endl;
        else if (abs(b - a) >= x)
            cout << 1 << endl;
        else
        {
            if (((a + x) > r && (a - x) < l) || ((b + x) > r && (b - x) < l))
                cout << -1 << endl;
            else if ((a - x) >= l || (b + x) <= r)
                cout << 2 << endl;
            else
                cout << 3 << endl;
        }
    }
}
