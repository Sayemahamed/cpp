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
    vector<long long>dat( 3 );
    for (auto& it : dat)cin >> it;
    bool isPossible = false;
    for (long long i = 0;i < 4;i++) {
        sort( all( dat ) );
        long long j = 1;
        while (j < dat.size() and dat[ j ] == dat[ j - 1 ])j++;
        if (j == dat.size())isPossible = true;
        dat.push_back( dat[ j ] - dat[ j - 1 ] );
        dat[ j ] = dat[ j - 1 ];
    }
    if (isPossible)cout << "YES" << endl;
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