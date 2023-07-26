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
    long long siz, limit;
    cin >> siz >> limit;
    vector<long long>data( siz );
    for (auto& it : data)cin >> it;
    long long firstElement = data[ 0 ], lastElement = data[ siz - 1 ], tempLimit = limit;
    for (long long i = 0;i < siz;i++) {
        if (tempLimit > 0) {
            if (data[ i ] == firstElement)tempLimit--;
        }
        else {
            if (data[ i ] == lastElement)limit--;
        }
    }
    if (limit <= 0)cout << "YES" << endl;
    else if (firstElement == lastElement and tempLimit == 0)cout << "YES" << endl;
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