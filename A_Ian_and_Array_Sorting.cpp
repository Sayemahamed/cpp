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
bool isSorted( vector<long long >& data ) {
    for (long long i = 0;i < data.size() - 1;i++) {
        if (data[ i ] > data[ i + 1 ])return false;
    }
    return true;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long siz, mn = INT64_MAX;cin >> siz;
    vector<long long>data( siz );
    for (auto& it : data)cin >> it, mn = min( mn, it );
    if (siz & 1) {
        cout << "YES" << endl;
        return;
    }
    long long x = data[ 0 ] + 1 - mn;
    data[ 0 ] -= x;data[ 1 ] -= x;
    for (long long i = 1;i < siz - 1;i++) {
        x = data[ i - 1 ] - data[ i ];
        data[ i ] += x;
        data[ i + 1 ] += x;
    }
    if (isSorted( data ))cout << "YES" << endl;
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