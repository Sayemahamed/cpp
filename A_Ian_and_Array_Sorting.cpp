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
bool isSorted( vector<long long >& data ) {
    for (long long i = 0;i < data.size() - 1;i++) {
        if (data[ i ] > data[ i + 1 ])return false;
    }
    return true;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long size;cin >> size;
    vector<long long >data( size );
    for (auto& it : data)cin >> it;
    long long temp = 0;
    for (long long i = 0;i < size - 2;i++) {
        temp = max( data[ i ] - data[ i + 1 ], (long long)0 );
        data[ i + 1 ] += temp;
        data[ i + 2 ] += temp;
    }
    for (long long i = size - 1;i > 1;i--) {
        temp = max( data[ i - 1 ] - data[ i ], (long long)0 );
        data[ i - 1 ] -= temp;
        data[ i - 2 ] -= temp;
    }
    if (isSorted( data ))cout << "YES" << endl;
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