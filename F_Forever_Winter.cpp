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
    long long node, edges, x, y;
    cin >> node >> edges;
    vector<long long >index[ node + 1 ];
    for (long long i = 0;i < edges;i++) {
        cin >> x >> y;
        index[ x ].push_back( y );
        index[ y ].push_back( x );
    }
    map<long long, long long >ans;
    for (long long i = 1;i <= node;i++) {
        if (index[ i ].size() != 1)
            ans[ index[ i ].size() ]++;
    }
    long long a, b;
    if (ans.size() == 1) {
        a = ans.begin()->first;
        b = a;
    }
    else {
        for (auto& it : ans) {
            if (it.second == 1) {
                a = it.first;
            }
            else {
                b = it.first;
            }
        }
    }
    cout << a << ' ' << b - 1 << endl;
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