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
    long long size, x;cin >> size;
    vector<long long >dat( size );
    bool oneExist = false, zeroExist = false;
    for (long long i = 0;i < size;i++) {
        cin >> dat[ i ];
    }
    for (long long i = 0;i < size;i++) {
        cin >> x;
        if (x)oneExist = true;
        else zeroExist = true;
    }
    if ((oneExist and zeroExist) or is_sorted( all( dat ) ))cout << "Yes" << endl;
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