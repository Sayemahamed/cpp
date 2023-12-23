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
void dfs( vector<vector<char>>& data, long long i, long long j ) {
    if (i < data.size() - 1 and data[ i + 1 ][ j ] == '*') {
        cout << 'D';
        data[ i + 1 ][ j ] = '.';
        dfs( data, i + 1, j );
    }
    if (i > 0 and data[ i - 1 ][ j ] == '*') {
        cout << 'U';
        data[ i - 1 ][ j ] = '.';
        dfs( data, i - 1, j );
    }
    if (j < data[ 0 ].size() - 1 and data[ i ][ j + 1 ] == '*') {
        cout << 'R';
        data[ i ][ j + 1 ] = '.';
        dfs( data, i, j + 1 );
    }
    if (j > 0 and data[ i ][ j - 1 ] == '*') {
        cout << 'L';
        data[ i ][ j - 1 ] = '.';
        dfs( data, i, j - 1 );
    }
        if (i < data.size() - 1 and data[ i + 1 ][ j ] == 'S') {
        cout << 'D';
        data[ i + 1 ][ j ] = '.';
        dfs( data, i + 1, j );
    }
    if (i > 0 and data[ i - 1 ][ j ] == 'S') {
        cout << 'U';
        data[ i - 1 ][ j ] = '.';
        dfs( data, i - 1, j );
    }
    if (j < data[ 0 ].size() - 1 and data[ i ][ j + 1 ] == 'S') {
        cout << 'R';
        data[ i ][ j + 1 ] = '.';
        dfs( data, i, j + 1 );
    }
    if (j > 0 and data[ i ][ j - 1 ] == 'S') {
        cout << 'L';
        data[ i ][ j - 1 ] = '.';
        dfs( data, i, j - 1 );
    }
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long x, y;cin >> x >> y;
    vector<vector<char>>data( x, vector<char>( y ) );
    for (auto& it : data)for (auto& it1 : it)cin >> it1;
    // for (auto& it : data) {
    //     for (auto& it1 : it)cout << it1;
    //     cout << endl;
    // }
    for (long long i = 0;i < x;i++) {
        for (long long j = 0;j < y;j++) {
            if (data[ i ][ j ] == 'S') {
                dfs( data, i, j );
            }
        }
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