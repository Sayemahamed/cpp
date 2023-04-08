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
    map<char, int> dat;
    for (auto &it : s)
        dat[it]++;
    if (dat.size() == 1)
        cout << -1 << endl;
    else
    {
        long long mx = 0;
        for (auto &it : dat)
            mx = max(mx, (long long)it.second);
        if (mx == 3)
            cout << 6 << endl;
        else
            cout << 4 << endl;
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