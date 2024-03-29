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
bool check( long long number, long long count ) {
    for (long long i = count;i > 0;i--) {
        if (number % i != 0)return true;
    }
    return false;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long size;cin >> size;
    vector<long long>data( size );
    for (auto& it : data)cin >> it;
    bool isPossible = true;
    for (long long i = 0;i < 30 and i < size;i++) {
        isPossible = isPossible and check( data[ i ], i + 2 );
    }
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