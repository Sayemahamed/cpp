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
    long long siz, special, specialCount = 0;cin >> siz >> special;
    long long si = 2 * (siz - 1);
    while (si--) {
        long long x;cin >> x;
        if (x == special)specialCount++;
    }
    if (specialCount <= 1 or (siz-1) & 1)cout << "Ayush" << endl;
    else cout << "Ashish" << endl;
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