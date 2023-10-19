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
struct people {
    long long cost, total;
    people() {}
};
//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve() {
    long long peoples, chief;
    cin >> peoples >> chief;
    long long ans = chief;
    vector<people>data( peoples );
    for (auto& it : data)cin >> it.total;
    for (auto& it : data)cin >> it.cost;
    sort( data.begin(), data.end(), []( people a, people b ) {
        return a.cost < b.cost;
        } );
    peoples--;
    for (long long i = 0;i < data.size();i++) {
        if (peoples == 0 or data[ i ].cost > chief)break;
        ans += data[ i ].cost * min( data[ i ].total, peoples );
        peoples -= min( data[ i ].total, peoples );
    }
    ans += chief * peoples;
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