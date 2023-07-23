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
struct Node {
    long long X, Y;
    Node( long long x, long long y ) {
        X = x; Y = y;
    }
};
//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve() {
    long long numberOfStamps, ans = 0, X, Y, a, b;
    cin >> numberOfStamps >> X >> Y;
    vector<Node> nodes;
    while (numberOfStamps--) {
        cin >> a >> b;
        Node N( a, b ), M( b, a );
        nodes.push_back( N );
        nodes.push_back( M );
    }
    for (long long i = 0;i < nodes.size();i++) {
        for (long long j = i + 1 + (i % 2 == 0);j < nodes.size();j++) {
            if ((nodes[ i ].X <= X and nodes[ j ].X <= X and nodes[ i ].Y + nodes[ j ].Y <= Y) or (nodes[ i ].X + nodes[ j ].X <= X and nodes[ i ].Y <= Y and nodes[ j ].Y <= Y)) {
                ans = max( ans, nodes[ i ].X * nodes[ i ].Y + nodes[ j ].X * nodes[ j ].Y );
            }
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
    // cin >> test;
    while (test--) {
        solve();
    }
}