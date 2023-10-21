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
    long long n, m, k;cin >> n >> m >> k;
    if (k == 1)cout << 1 << endl;
    if (k == 2)if (m <= n)cout << m << endl;
    else cout << n + abs( m - n ) / n << endl;
    if (k == 3)if (n >= m)cout << 0 << endl;
    else cout << m - n - abs( n - m ) / n << endl;
    if (k > 3)cout << 0 << endl;
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