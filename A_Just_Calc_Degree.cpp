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
// set<long long>dat;

//----------------------------------------------------------------//
// helper functions //
bool dfs( vector<long long >index[], long long i ) {
    // dat.insert( i );
    long long zeroCount = 0;
    for (auto& it : index[ i ]) {
        if (dfs( index, it ) == false) return false;
        if (index[ it ].size() == 0)zeroCount++;
    }
    return zeroCount >= 3 or index[ i ].size() == 0;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long siz, x;cin >> siz;
    vector<long long>index[ siz + 2 ];
    for (long long i = 2;i <= siz;i++) {
        cin >> x;
        index[ x ].push_back( i );
    }
    if (dfs( index, 1 ))cout << "Yes" << endl;
    else cout << "No" << endl;
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