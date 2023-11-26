#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define all(x)  x.begin(), x.end()
#define rall(x)  x.rbegin(), x.rend()
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//

//----------------------------------------------------------------//
// helper functions //
long long getAns( vector<long long>& coins, vector<long long>& ans, long long toGet ) {
    if (toGet == 0)return 0;
    if (toGet < 0)return INT32_MAX;
    if (ans[ toGet ] != INT32_MAX)return ans[ toGet ];
    long long temp = INT32_MAX;
    for (auto& coin : coins) {
            temp = min( temp, 1 + getAns( coins, ans, toGet - coin ) );
    }
    return ans[ toGet ] = temp;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long numberOfCoins, toGet;cin >> numberOfCoins >> toGet;
    vector<long long>coins( numberOfCoins ), ans( toGet + 7, INT32_MAX );
    sort( coins.begin(), coins.end() );
    ans[ 0 ] = 0;
    for (auto& coin : coins)cin >> coin;
    long long out = getAns( coins, ans, toGet );
    cout << (out >= INT32_MAX ? -1 : out) << endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    // cin >> test;
    while (test--) {
        solve();
    }
}