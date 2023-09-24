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
    long long ans = 0;
    char c;
    for (long long i = 1;i <= 10;i++)for (long long j = 1;j <= 10;j++) {
        cin >> c;
        if (c == 'X') {
            long long c = abs( i - 10 ) + 1, d = abs( j - 10 ) + 1;
            ans += min( min( i, j ), min( c, d ) );
        }
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
    cin >> test;
    while (test--) {
        solve();
    }
}