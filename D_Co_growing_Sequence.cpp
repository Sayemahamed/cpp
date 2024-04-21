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
long long getAns( long long x, long long y ) {
    long long ans = 0, i = 0;
    while (x >= (1 << i)) {
        if (x & (1 << i) and !(y & (1 << i)))ans += (1 << i);
        i++;
    }
    return ans;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long size;cin >> size;
    vector<long long>data( size );
    for (auto& it : data)cin >> it;
    cout << 0 << ' ';
    for (long long i = 0;i < size - 1;i++) {
        long long ans = getAns( data[ i ], data[ i + 1 ] );
        cout << ans << ' ';
        data[ i + 1 ] ^= ans;
    }
    cout << endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    int test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
}