#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, a = 0, b = 0, c = 0, x;
    cin >> n;
    for (long long i = 0; i < n; i++)
        cin >> x, a += x;
    for (long long i = 0; i < n - 1; i++)
        cin >> x, b += x;
    for (long long i = 0; i < n - 2; i++)
        cin >> x, c += x;
    cout << a - b << endl;
    cout << b - c << endl;
}