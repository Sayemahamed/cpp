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
    long long ans = 0, apples, peoples;cin >> apples >> peoples;
    apples %= peoples;
    for (long long i = 0;i < 30 and apples;i++) {
        while (apples < peoples and apples) {
            ans += apples;
            apples <<= 1;
        }
        apples %= peoples;
    }
    if (apples)cout << -1 << endl;
    else cout << ans << endl;
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