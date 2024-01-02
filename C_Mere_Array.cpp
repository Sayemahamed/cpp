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
    long long size, mn = INT64_MAX;cin >> size;
    vector<long long>arr( size ), data;
    for (auto& it : arr)cin >> it, mn = min( it, mn );
    data = arr;
    sort( all( arr ) );
    bool isPossible = true;
    for (long long i = 0;i < size;i++) {
        if (data[ i ] != arr[ i ] and data[ i ] % mn != 0) {
            isPossible = false;
            break;
        }
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