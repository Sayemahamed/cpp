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
long long getNumber( vector<long long>& dat, long long number ) {
    return upper_bound( dat.begin(), dat.end(), number ) - dat.begin();
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long numbers, toGet;cin >> numbers >> toGet;
    vector<long long>dat( numbers );
    for (auto& it : dat)cin >> it;
    sort( all( dat ) );
    // for (auto& it : dat)cout<<it<<' ';
    long long low = 1, high = 1000000000, mid;
    while (high - low > 0) {
        mid = (high + low + 1) / 2;
        if (getNumber( dat, mid ) > toGet)high = mid - 1;
        else low = mid;
    }
    if (getNumber( dat, low ) != toGet)cout << -1 << endl;
    else
        cout << low << endl;
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