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
    long long curentX, curentY, x, y, ans = 0;cin >> curentX >> curentY >> x >> y;
    long long gc = gcd( x, y );
    x /= gc;
    y /= gc;
    // if (x > y and curentY > curentX)swap( curentX, curentY );
    // if (x < y and curentY < curentX)swap( curentX, curentY );
    ans = min( curentX / x, curentY / y );
    cout << x * ans << ' ' << y * ans << endl;
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