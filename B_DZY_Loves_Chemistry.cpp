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
long long dfs( vector<vector<long long>>& list, vector<bool>& isVisited, long long index ) {
    if (isVisited[ index ])return 0;
    isVisited[ index ] = true;
    long long ans = 0;
    for (auto& it : list[ index ]) {
        if (it != index and !isVisited[ it ])ans += 1 + dfs( list, isVisited, it );
    }
    return ans;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long chemicals, input;cin >> chemicals >> input;
    vector<vector<long long>> list( chemicals + 1 );
    vector<bool>isVisited( chemicals + 1, false );
    long long x, y, ans = 0;
    while (input--) {
        cin >> x >> y;
        list[ x ].push_back( y );
        list[ y ].push_back( x );
    }
    for (long long i = 1;i <= chemicals;i++) {
        if (!isVisited[ i ])
            ans += dfs( list, isVisited, i );
    }
    cout << ((unsigned long long)1 << (ans)) << endl;
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