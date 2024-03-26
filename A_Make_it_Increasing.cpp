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
long long decrementalCount( vector<long long>& data, long long index ) {
    long long ans = 0;
    int pre = 0, y;
    index--;
    for (;index >= 0;index--) {
        y = pre / data[ index ] + 1;
        ans += y;
        pre = data[ index ] * y;
    }
    return ans;
}
long long incrementalCount( vector<long long>& data, long long index ) {
    long long ans = 0;
    int pre = 0, y;
    index++;
    for (;index < data.size();index++) {
        y = pre / data[ index ] + 1;
        ans += y;
        pre = data[ index ] * y;
    }
    return ans;
}
//----------------------------------------------------------------//
// solve function//
void solve() {
    long long size, ans = INT64_MAX, x, y, pre = 0;cin >> size;
    vector<long long>data( size );
    for (auto& it : data)cin >> it;
    for (long long i = 0;i < size;i++) {
        ans = min( ans, decrementalCount( data, i ) + incrementalCount( data, i ) );
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