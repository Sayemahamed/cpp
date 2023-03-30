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
    long long all, alice, bob, none;
    cin >> all >> alice >> bob >> none;
    long long ans = all;
    if (all == 0 and (alice != 0 or bob != 0 or none != 0))
        cout << 1 << endl;
    else
    {
        if (abs(alice - bob) <= all)
        {
            ans += alice;
            ans += bob;
            all -= abs(alice - bob);
        }
        else
        {
            ans += min(alice, bob) * 2 + all + 1;
            all = -1;
        }
        if (all >= 0)
        {
            if (all >= none)
                ans += none;
            else
                ans += all + 1;
        }
        cout << ans << endl;
    }
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