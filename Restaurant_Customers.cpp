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
    long long siz, ans = 0;
    cin >> siz;
    map<long long, long long> customerIndex;
    while (siz--)
    {
        long long x, y;
        cin >> x >> y;
        customerIndex[x]++;
        customerIndex[y]--;
    }
    long long tmp = 0;
    for (auto &it : customerIndex)
    {
        tmp += it.second;
        ans = max(ans, tmp);
    }
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
    // cin >> test;
    while (test--)
    {
        solve();
    }
}