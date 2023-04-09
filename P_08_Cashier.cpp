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
    long long people, time, breakTime, ans = 0, cur = 0;
    cin >> people >> time >> breakTime;
    while (people--)
    {
        long long enter, timeTakes;
        cin >> enter >> timeTakes;
            ans+=(enter-cur)/breakTime;
        cur = enter + timeTakes;
    }
    cout << (time - cur) / breakTime + ans << endl;
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