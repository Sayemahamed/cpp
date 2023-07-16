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
    long long sizeX, sizeY, friends;
    cin >> sizeX >> sizeY >> friends;
    long long vikaX, vikaY;
    cin >> vikaX >> vikaY;
    bool doseEvenExists = false;
    long long x, y;
    while (friends--) {
        cin >> x >> y;
        long long tmp = (abs( vikaX - x ) + abs( vikaY - y ));
        if (!doseEvenExists)
            doseEvenExists = tmp % 2 == 0 ? true : false;
    }
    if (doseEvenExists)cout << "NO" << endl;
    else cout << "YES" << endl;
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