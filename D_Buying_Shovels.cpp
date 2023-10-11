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
    long long want, type;cin >> want >> type;
    if (type >= want) {
        cout << 1 << endl;return;
    }
    long long ans = 1;
    for (long long i = 2;i <= type;i++) {
        if (i * i > want)break;
        if (want % i == 0) {
            if (want / i <= type)
                ans = max( ans, want / i );
            ans = max( ans, i );
        }
    }
    cout << want / ans << endl;
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