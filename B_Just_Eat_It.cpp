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
    long long size, total = 0, x;cin >> size;
    vector<long long>preSum( size, 0 ), minusIndex;
    bool isPossible = false;
    for (long long i = 0;i < size;i++) {
        cin >> x;
        preSum[ i ] = x;
        if (i != 0)preSum[ i ] += preSum[ i - 1 ];
        total += x;
        if (preSum[ i ] <= 0)minusIndex.push_back( i );
    }
    for (long long i = 0;i < minusIndex.size();i++) {
        if (minusIndex[ i ])if (preSum[ minusIndex[ i ] - 1 ] >= total)isPossible = true;
        if (minusIndex[ i ] < size - 1)if (preSum[ size - 1 ] - preSum[ minusIndex[ i ] ] >= total)isPossible = true;
    }
    for (long long i = 0;i < size - 1;i++) {
        if (preSum[ i ] >= total)isPossible = true;
    }
    if (isPossible)cout << "NO" << endl;
    else cout << "YES" << endl;
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