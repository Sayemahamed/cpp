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
    vector<long long>data( siz );
    for (auto& it : data)cin >> it;
    if (siz == 2) {
        if (data[ 0 ] > data[ 1 ])cout << "NO" << endl;
        else cout << "YES" << endl;
        return;
    }
    bool exists = false;
    for (long long i = 1;i < siz - 1;i++) {
        if (data[ i ] < data[ i + 1 ] and data[ i ] < data[ i - 1 ])exists = true;
    }
    if (!exists or siz & 1)cout << "YES" << endl;
    else cout << "NO" << endl;
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