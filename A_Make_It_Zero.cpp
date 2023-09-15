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
    long long siz, x;
    cin >> siz;
    for (long long i = 0;i < siz;i++)cin >> x;
    if (siz & 1) {
        cout << 4 << endl;
        cout << 1 << ' ' << 2 << endl;
        cout << 1 << ' ' << 2 << endl;
        cout << 2 << ' ' << siz << endl;
        cout << 2 << ' ' << siz << endl;
    }
    else {
        cout << 2 << endl;
        cout << 1 << ' ' << siz << endl;
        cout << 1 << ' ' << siz << endl;
    }
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