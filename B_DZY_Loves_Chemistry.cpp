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
long long dfs0( vector<long long>chemicalPairs[], vector<bool>& isVisited, long long index, long long distance, long long& mxDistance, long long& node ) {
    isVisited[ index ] = true;
    if (distance >= mxDistance) {
        mxDistance = distance;
        node = index;
    }
    for (auto& it : chemicalPairs[ index ]) {
        if (isVisited[ it ])continue;
        return dfs0( chemicalPairs, isVisited, it, distance + 1, mxDistance, node );
    }
    return distance;
}
long long dfs1( vector<long long>chemicalPairs[], vector<bool>& isVisited, long long index, long long distance ) {
    isVisited[ index ] = false;
    for (auto& it : chemicalPairs[ index ]) {
        if (!isVisited[ it ])continue;
        return max(dfs1( chemicalPairs, isVisited, it, distance + 1 ), distance + 1);
    }
    return distance;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long chemical, pair;
    cin >> chemical >> pair;
    vector<long long>chemicalPairs[ chemical + 1 ];
    long long x, y, maxDistance = -1, node;
    while (pair--) {
        cin >> x >> y;
        chemicalPairs[ x ].push_back( y );
        chemicalPairs[ y ].push_back( x );
    }
    vector<bool>isVisited( chemical + 1, false );
    dfs0( chemicalPairs, isVisited, 1, 0, maxDistance, node );
    cout << (1 << dfs1( chemicalPairs, isVisited, node, 0 )) << endl;
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