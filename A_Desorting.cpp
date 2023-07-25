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
    long long siz;cin >> siz;
    vector<long long>dat( siz );
    for (auto& it : dat)cin >> it;
    if (is_sorted( dat.begin(), dat.end() )) {
        long long ans = INT64_MAX;
        for (long long i = 0;i < siz - 1;i++)ans = min( ans, dat[ i + 1 ] - dat[ i ] );
        if (ans == 0)ans = 1;
        cout << (ans) / 2 + 1 << endl;
    }
    else cout << 0 << endl;
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