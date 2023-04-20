#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
// data types//

//----------------------------------------------------------------//
// helper functions //

//----------------------------------------------------------------//
// solve function//
void solve()
{
    string s;
    cin >> s;

    long long  n = s.length();
    s = s + s;
    long long  m = 0, cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            cnt++;
        else
            cnt = 0;
        m = max(m, cnt);
    }
    if (n < m)
        cout << n * n << '\n';
    else
        cout << ((m + 1) / 2) * ((m + 2) / 2) << '\n';
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
}