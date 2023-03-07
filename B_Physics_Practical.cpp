#include <bits/stdc++.h>
using namespace std;

int n, j, m = INT_MAX, a[123456];
main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        while (j < n - 1 && a[j + 1] <= 2 * a[i])
        {
            j++;
        }
        m = min(m, i + n - j - 1);
    }
    cout << m;
}
