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
    map<long long, long long>data;
    for (long long i = 0;i < size;i++) {
        data[ i ];
    }
    for (long long i = 0;i < size;i++) {
        long long x;cin >> x;
        for (auto& it : data) {
            if (it.second == x) {
                cout << (char)('a' + it.first);
                data[ it.first ]++;
                break;
            }
        }
    }
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