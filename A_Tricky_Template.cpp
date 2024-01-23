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
    long long length; cin >> length;
    string a, b, c;cin >> a >> b >> c;
    for (long long i = 0;i < length;i++) {
        if (a[ i ] != b[ i ] && (a[ i ] == c[ i ] || b[ i ] == c[ i ])) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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