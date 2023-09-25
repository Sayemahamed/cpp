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
long long sum( vector<long long>& data ) {
    long long tem = 0;
    for (auto& it : data)tem += it;
    return tem;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long siz;
    cin >> siz;
    vector<long long> A( siz ), B( siz );
    for (auto& it : A)cin >> it;
    for (auto& it : B)cin >> it;
    sort( A.begin(), A.end() );
    sort( B.begin(), B.end() );
    cout << min( sum( A ) + B[ 0 ] * siz, sum( B ) + A[ 0 ] * siz ) << endl;
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