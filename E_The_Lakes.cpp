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
long long visit( vector<vector<long long>>& lake, long long i, long long j ) {
    if (i < 0 || j < 0 || i >= lake.size() || j >= lake[ 0 ].size() || lake[ i ][ j ] == 0) return 0;
    if (lake[ i ][ j ] == 0)return 0;
    long long ans = lake[ i ][ j ];
    lake[ i ][ j ] = 0;
    ans +=
        visit( lake, i + 1, j ) + visit( lake, i - 1, j ) + visit( lake, i, j + 1 ) + visit( lake, i, j - 1 );
    return ans;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long x, y;cin >> x >> y;
    vector<vector<long long>>lake( x, vector<long long>( y ) );
    for (auto& it : lake)for (auto& it2 : it)cin >> it2;
    long long ans = 0;
    for (long long i = 0; i < x; i++)
        for (long long j = 0; j < y; j++)
            ans = max( ans, visit( lake, i, j ) );
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