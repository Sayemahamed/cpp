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
    long long size, lower, higher;
    cin >> size >> lower >> higher;
    vector<long long >dat( size );
    for (auto& it : dat)cin >> it;
    sort( all( dat ) );
    long long ans = 0;
    for (long long i = 0;i < size;i++) {
        ans += upper_bound( dat.begin() + i + 1, dat.end(), higher - dat[ i ] ) - lower_bound( dat.begin() + i + 1, dat.end(), lower - dat[ i ] );
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