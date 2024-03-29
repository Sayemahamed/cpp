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
    long long x, siz;cin >> siz;
    vector<long long >data( siz + 1, false );
    for (long long i = 1;i <= siz;i++) {
        cin >> x;
        data[ x ] = i;
    }
    long long mn = siz, mx = 0;
    for (long long i = 1;i <= siz;i++) {
        mx = max( mx, data[ i ] );
        mn = min( mn, data[ i ] );
        cout << (i == mx - mn + 1);
    }
    cout << endl;
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