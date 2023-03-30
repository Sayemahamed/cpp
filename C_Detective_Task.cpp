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
    long long zero = 0, one = s.length() - 1, ans = 0;
    while (s[zero] != '0' and zero < s.length())
        zero++;
    while (s[one] != '1' and one > 0)
        one--;
    for (long long i = 0; i < s.length(); i++)
        if (zero >= i and one <= i)
            ans++;
    cout << ans << endl;
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