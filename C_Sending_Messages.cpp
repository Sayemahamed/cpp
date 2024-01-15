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


//----------------------------------------------------------------//
// solve function//
void solve() {
    long long messages, initial, unit, onOff;cin >> messages >> initial >> unit >> onOff;
    vector<long long> data( messages );
    for (auto& it : data)cin >> it;
    data.push_back( 0 );
    sort( all( data ) );
    for (long long i = 1;i <= messages;i++) {
        initial -= min( onOff, (data[ i ] - data[ i - 1 ]) * unit );
    }
    if (initial > 0)cout << "YES" << endl;
    else cout << "NO" << endl;
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