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
    long long friends, gifts, ans = 0; cin >> friends >> gifts;
    vector<long long > arr( friends ), shop( gifts );
    for (auto& it : arr)cin >> it;
    for (auto& it : shop)cin >> it;
    sort( all( arr ), greater<long long>() );
    long long j = 0;
    for (long long i = 0;i < friends;i++) {
        if (j<gifts and shop[ arr[ i ] - 1 ]>shop[ j ]) {
            ans += shop[ j++ ];
        }
        else ans += shop[ arr[ i ] - 1 ];
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