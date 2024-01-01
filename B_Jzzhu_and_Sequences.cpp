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
    long long x, y, z, ans;cin >> x >> y >> ans;
    for (long long i = 2;i < ans;i++) {
        z = y - x;
        x = y;
        y = z;
    }
    if (ans > 2)
        cout << (z + 1000000007) % 1000000007 << endl;
    else if (ans == 2)cout << (y + 1000000007) % 1000000007 << endl;
    else cout << (x + 1000000007) % 1000000007 << endl;
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