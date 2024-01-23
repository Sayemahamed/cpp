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
    string a, b, c;
    cin >> a >> b >> c;
    bool possible = 0;
    for (int i = 0; i < length; i++)
    {
        if (a[ i ] != c[ i ] && b[ i ] != c[ i ])
        {
            possible = 1;
            break;
        }
    }
    if (possible) cout << "YES" << endl;
    else cout << "NO" << endl;
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