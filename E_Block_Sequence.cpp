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
long long choose( vector<long long>& dat, map<long long, long long>& ans, long long index ) {
    long long a = 0, b = 0;
    if (ans.find( index ) != ans.end()) return ans[ index ];
    if (index + 1 < dat.size())a = choose( dat, ans, index + 1 );
    if (index + dat[ index ] < dat.size())
        b = dat[ index ] + 1 + choose( dat, ans, index + dat[ index ] + 1 );
    return ans[ index ] = max( a, b );
    return 0;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long siz;cin >> siz;
    vector<long long >dat( siz );
    map<long long, long long>ans;
    for (auto& it : dat)cin >> it;
    cout << siz - choose( dat, ans, 0 ) << endl;
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