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
void assignGroup( map<int, vector<int>>& list, vector<bool>& isVisited, int& groupA, int& groupB, int node, bool isGroupA ) {
    if (isVisited[ node ]) return;
    isVisited[ node ] = true;
    if (isGroupA) groupA++;
    else groupB++;
    for (int child : list[ node ]) {
        assignGroup( list, isVisited, groupA, groupB, child, !isGroupA );
    }
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    int numberOfEdges;cin >> numberOfEdges;
    map<int, vector<int>>list;
    vector<bool>isVisited( numberOfEdges + 1, false );
    for (int i = 1;i < numberOfEdges;i++) {
        int x, y;cin >> x >> y;
        list[ x ].push_back( y );
        list[ y ].push_back( x );
    }
    int groupA = 0, groupB = 0;
    assignGroup( list, isVisited, groupA, groupB, 1, true );
    // cout<< groupA << ' ' << groupB << endl;
    cout << (long long)groupA * groupB - numberOfEdges + 1 << endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    int test = 1;
    // cin >> test;
    while (test--) {
        solve();
    }
}