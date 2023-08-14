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
    long long numberOfArrays, ans = 0;cin >> numberOfArrays;
    vector<long long>data1, data2;
    for (long long i = 0;i < numberOfArrays;i++) {
        long long siz;cin >> siz;
        vector<long long >tmp( siz );
        for (auto& it : tmp)cin >> it;
        sort( tmp.begin(), tmp.end() );
        data1.push_back( tmp[ 0 ] );
        data2.push_back( tmp[ 1 ] );
    }
    sort( data1.begin(), data1.end() );
    sort( data2.begin(), data2.end() );
    for (long long i = 1;i < data2.size();i++)ans += data2[ i ];
    cout << ans + data1[ 0 ] << endl;
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