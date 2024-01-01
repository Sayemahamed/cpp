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
    long long size, ans = 0;cin >> size;
    vector<long long>data( size + 1 );
    for (long long i = 1;i <= size;i++)cin >> data[ i ];
    for (long long i = 1;i <= size;i++) {
        for (long long j = data[ i ] - i;j <= size;j += data[ i ]) {
            if (i + j == data[ j ] * data[ i ])ans++;
        }
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