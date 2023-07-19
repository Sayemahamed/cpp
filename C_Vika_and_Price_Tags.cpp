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
long long depth( long long a, long long b ) {
    if (a == 0) {
        return 0;
    }
    if (b == 0) {
        return 1;
    }
    if (a >= b) {
        long long r = a % b;
        long long k = a / b;
        if (k % 2 == 1) {
            return depth( b, r ) + k + k / 2;
        }
        else {
            return depth( r, b ) + k + k / 2;
        }
    }
    return 1 + depth( b, abs( a - b ) );
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long siz;cin >> siz;
    vector<long long>firstArray( siz ), secondArray( siz );
    for (auto& it : firstArray)cin >> it;
    for (auto& it : secondArray)cin >> it;
    set<long long>count;
    for (long long i = 0;i < siz;i++) {
        if (firstArray[ i ] == 0 and secondArray[ i ] == 0)continue;
        count.insert( depth( firstArray[ i ], secondArray[ i ] ) % 3 );
    }
    if (count.size() <= 1)cout << "YES" << endl;
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