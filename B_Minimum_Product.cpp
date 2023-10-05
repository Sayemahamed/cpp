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
    long long a, b, x, y, n, remaining;cin >> a >> b >> x >> y >> n;
    if (max( a - n, x ) < max( b - n, y )) {
        a -= n;
        remaining = max( x - a, (long long)0 );
        a = max( a, x );
        b -= min( remaining, b - y );
        cout << a * b << endl;
    }
    else {
        b -= n;
        remaining = max( y - b, (long long)0 );
        b = max( b, y );
        a -= min( remaining, a - x );
        cout << a * b << endl;
    }
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