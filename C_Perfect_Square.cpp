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
    long long siz, ans = 0;cin >> siz;
    vector<vector<char>>dat( siz, vector<char>( siz ) ), dat2( siz, vector<char>( siz ) );
    for (auto& it : dat)for (auto& c : it)cin >> c;
    for (long long i = 0;i < siz;i++) {
        for (long long j = 0;j < siz;j++) {
            dat2[ i ][ j ] = dat[ siz - i - 1 ][ j ];
        }
    }
    for (long long i = 0;i < siz;i++) {
        for (long long j = 0;j < siz;j++) {
            ans += abs( dat[ i ][ j ] - dat2[ i ][ j ] );
            dat[ i ][ j ] = max( dat[ i ][ j ], dat2[ i ][ j ] );
            dat2[ i ][ j ] = dat[ i ][ j ];
        }
    }
    for (long long i = 0;i < siz;i++) {
        for (long long j = 0;j < siz;j++) {
            ans += abs( dat[ i ][ j ] - dat2[ i ][ j ] );
            dat[ i ][ j ] = max( dat[ i ][ j ], dat2[ i ][ j ] );
            dat2[ i ][ j ] = dat[ i ][ j ];
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