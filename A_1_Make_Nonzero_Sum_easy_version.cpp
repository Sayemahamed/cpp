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
    long long size;cin >> size;
    vector<long long>data( size );
    for (auto& it : data)cin >> it;
    if (size & 1)cout << -1 << endl;
    else {
        vector<pair<long long, long long>>ans;
        for (long long i = 0;i < size;i += 2) {
            if (data[ i ] == data[ i + 1 ])ans.push_back( { i + 1,  i + 2 } );
            else ans.push_back( { i + 1,i + 1 } ), ans.push_back( { i + 2,i + 2 } );
        }
        cout << ans.size() << endl;
        for (auto& it : ans)cout << it.first << ' ' << it.second << endl;
    }
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