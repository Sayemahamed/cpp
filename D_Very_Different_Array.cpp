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
    long long pet, vas;cin >> pet >> vas;
    vector<long long >pData( pet ), vData( vas );
    for (auto& it : pData)cin >> it;
    for (auto& it : vData)cin >> it;
    sort( all( pData ) );
    sort( all( vData ) );
    long long ans = 0, a1 = 0, b1 = pet - 1, a2 = 0, b2 = vas - 1;
    for (int i = 0;i < pet;i++) {
        long long x = abs( pData[ a1 ] - vData[ a2 ] );
        long long y = abs( pData[ b1 ] - vData[ b2 ] );
        long long z = abs( pData[ b1 ] - vData[ a2 ] );
        long long k = abs( pData[ a1 ] - vData[ b2 ] );
        long long a = max( x, max( y, max( z, k ) ) );
        ans += a;
        if (a == x)++a1, ++a2;
        else if (a == y)b1--, b2--;
        else if (a == z)a2++, b1--;
        else a1++, b2--;
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