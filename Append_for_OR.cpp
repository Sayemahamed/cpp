#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n, get, ans = 0;
        cin >> n >> get;
        while (n--)
        {
            long long x;
            cin >> x;
            ans |= x;
        }
        if ((get | ans) > get)
            cout << -1 << endl;
        else
            cout << get - ans << endl;
    }
}