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
    long long months, allowed, ans = 0, add = 0;cin >> months >> allowed;
    vector<long long >data( months ), preSum( months, 0 ), maxNeed( months, 0 );
    for (long long i = 0;i < months;i++) {
        cin >> data[ i ];
        preSum[ i ] = data[ i ];
        if (i)preSum[ i ] += preSum[ i - 1 ];
    }
    for (long long i = months - 2;i >= 0;i--) {
        maxNeed[ i ] = (data[ i + 1 ] * 100 + allowed - 1) / allowed;
    }
    for (long long i = 0;i < months;i++) {
        ans += max( (long long)0, maxNeed[ i ] - (preSum[ i ] + add) );
        if (maxNeed[ i ] > preSum[ i ] + add)add += maxNeed[ i ] - preSum[ i ] - add;
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