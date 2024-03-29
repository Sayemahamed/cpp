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
    long long theNumber, limit, forbidden;
    cin >> theNumber >> limit >> forbidden;
    if (forbidden != 1) {
        cout << "YES" << endl;
        cout << theNumber << endl;
        while (theNumber--)cout << 1 << ' ';
        cout << endl;
    }
    else if (theNumber & 1 and limit > 2 and forbidden != 3) {
        cout << "YES" << endl;
        cout << theNumber / 2 << endl;
        cout << 3 << ' ';
        theNumber /= 2;
        while (theNumber-- > 1)cout << 2 << ' ';
        cout << endl;
    }
    else if (!(theNumber & 1) and limit > 1) {
        cout << "YES" << endl;
        cout << theNumber / 2 << endl;
        theNumber/= 2;
        while (theNumber --)cout << 2 << ' ';
        cout << endl;
    }
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