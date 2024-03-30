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
long long getAns( vector<long long >& memoise, long long x, int level ) {
    if (x == 0) return 0;
    if (level > 15)return INT_MAX;
    if (memoise[ x ] < 20) return memoise[ x ];
    if (memoise[ x ] > 1 + min(
        getAns( memoise, (x + 1) % 32768, level + 1 ),
        getAns( memoise, (x * 2) % 32768, level + 1 )
    ))memoise[ x ] = 1 + min(
        getAns( memoise, (x + 1) % 32768, level + 1 ),
        getAns( memoise, (x * 2) % 32768, level + 1 )
    );
    return memoise[ x ];
}
//----------------------------------------------------------------//
// solve function//
void solve() {
    long long numbers;cin >> numbers;
    vector<long long >memoise( 32778, INT_MAX );
    memoise[ 0 ] = 0;
    int temp = 32768;
    for (int i = 0;temp >= 1 << i;i++)
        memoise[ temp >> i ] = i;
    while (numbers--) {
        long long x;cin >> x;
        memoise[ x ] = getAns( memoise, x % 32768, 0 );
        cout << memoise[ x ] << ' ';
    }
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