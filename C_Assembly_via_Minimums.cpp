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
    long long siz, input, mx = INT64_MIN, x;cin >> siz;
    input = (siz * (siz - 1)) / 2;
    map<long long, long long>data;
    for (long long i = 0; i < input;i++) {
        cin >> x;
        mx = max( mx, x );
        data[ x ]++;
    }
    vector<long long >ans( siz );
    ans[ siz - 1 ] = mx + 1;
    for (long long i = siz - 2;i >= 0;i--) {
        ans[ i ] = data.rbegin()->first;
        data.rbegin()->second -= (siz - i) - 1;
        if (data.rbegin()->second == 0)data.erase( data.find( data.rbegin()->first ) );
    }
    if (ans[ siz - 1 ] > 1000000000)ans[ siz - 1 ] = 1000000000;
    for (auto& it : ans)cout << it << ' ';
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