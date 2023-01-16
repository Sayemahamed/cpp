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
        long long a, b;
        cin >> a >> b;
        if (b <= 1)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << a << ' ' << a * b << " " << a * b + a << endl;
        }
    }
}