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
    long long n;cin >> n;
    if (n == 1)cout << 1 << endl;
    else if (n == 2)cout << 1 << ' ' << 2 << endl;
    else {
        cout << 2 << ' ';
        long long i = 2;
        while (i <= n) {
            if(i!=2)
            cout << i << ' ';
            i += 2;
        }
        i = 1;
        while (i <= n) {
            if(i!=3)
            cout << i << ' ';
            i += 2;
        }
        cout << 3 << endl;
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