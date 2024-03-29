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
    long long siz, ans = 0, diff = 0;cin >> siz;
    vector<vector<char>>dat( siz, vector<char>( siz ) );
    for (auto& it : dat)for (auto& c : it)cin >> c;
    for (long long i = 0;i < siz / 2;i++) {
        for (long long j = 0;j < siz / 2;j++) {
            char mx = max( { dat[ i ][ j ],dat[ siz - j - 1 ][ i ],dat[ siz - i - 1 ][ siz - j - 1 ],dat[ j ][ siz - i - 1 ] } );
            ans += mx * 4 - (dat[ i ][ j ] + dat[ siz - j - 1 ][ i ] + dat[ siz - i - 1 ][ siz - j - 1 ] + dat[ j ][ siz - i - 1 ]);
        }
    }
    cout << ans << endl;
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