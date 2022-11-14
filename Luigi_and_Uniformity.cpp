#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 1; i < n; i++)
    {
        if (a[i] % a[0] != 0)
        {
            cout << n << endl;
            return;
        }
        if (a[i] != a[0])
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}