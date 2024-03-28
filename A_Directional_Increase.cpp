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
    if (all_of( all( data ), []( long long x ) { return x == 0; } )) { cout << "Yes" << endl;return; }
    long long actualLastIndex = size - 1;
    while (data[ actualLastIndex ] == 0)actualLastIndex--;
    long long sum = 0;
    for (long long i = 0;i < actualLastIndex;i++) {
        sum += data[ i ];
        if (sum <= 0) {
            cout << "No" << endl;
            return;
        }
    }
    if (sum + data[ actualLastIndex ] == 0)
        cout << "Yes" << endl;
    else cout << "No" << endl;
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