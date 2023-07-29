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
long long getContrast( vector<long long>& data ) {
    long long ans = 0;
    for (long long i = 0;i < data.size() - 1;i++) {
        ans += abs( data[ i ] - data[ i + 1 ] );
    }
    return ans;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long siz;cin >> siz;
    vector<long long>data( siz );
    for (auto& it : data)cin >> it;
    cout << getContrast( data ) << endl;
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