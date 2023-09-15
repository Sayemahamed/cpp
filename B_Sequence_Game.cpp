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
    long long siz, x;cin >> siz;
    vector<long long>data( siz );
    for (auto& it : data)cin >> it;
    deque<long long>ans;
    ans.push_back( data[ 0 ] );
    for (long long i = 1; i < siz;i++) {
        if (data[ i ] < data[ i - 1 ]) {
            ans.push_back( 1 );
            ans.push_back( data[ i ] );
        }
        else ans.push_back( data[ i ] );
    }
    cout << ans.size() << endl;
    for (auto& it : ans)cout << it << ' ';
    cout << endl;
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