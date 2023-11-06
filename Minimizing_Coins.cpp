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
long long getAns( vector<long long>& coins, vector<long long>& ans, long long toGet, long long jump ) {
    if (ans[ toGet ] != INT64_MAX)return ans[ toGet ];

}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long numberOfCoins, toGet;cin >> numberOfCoins >> toGet;
    vector<long long>coins( numberOfCoins ), ans( toGet + 7, INT64_MAX );
    for (auto& coin : coins)cin >> coin;
    cout << getAns( coins, ans, toGet, INT64_MAX ) << endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
}