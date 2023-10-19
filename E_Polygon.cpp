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
void visit( vector<vector<char>>& grid, long long i, long long j ) {
    if (i < 0 or j < 0)return;
    if (i > 0 and grid[ i - 1 ][ j ] == '1' and grid[ i ][ j ] == '1') {
        visit( grid, i - 1, j );
    }
    if (j > 0 and grid[ i ][ j - 1 ] == '1' and grid[ i ][ j ] == '1') {
        visit( grid, i, j - 1 );
    }
    grid[ i ][ j ] = '0';
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long siz;cin >> siz;
    bool isPossible = true;
    vector<vector<char>>grid( siz, vector<char>( siz, false ) );
    for (auto& it : grid)for (auto& it2 : it)cin >> it2;
    for (long long i = 0; i < siz; i++)visit( grid, i, siz - 1 );
    for (long long i = 0; i < siz; i++)visit( grid, siz - 1, i );
    for (auto& it : grid)for (auto& it2 : it)if (it2 == '1')isPossible = false;
    if (isPossible)cout << "YES" << endl;
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