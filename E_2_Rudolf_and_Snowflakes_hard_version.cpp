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
vector<bool>preCalculate( 10000099, false );
//----------------------------------------------------------------//
// helper functions //
void calculate() {
    for (long long i = 2;i <= 1000;i++) {
        long long tmp = i;
        long long val = 1 + tmp;
        for (long long j = 0;j <= 20;j++) {
            tmp *= i;
            val += tmp;
            if (val > 1e6)break;
            preCalculate[ val ] = true;
        }
    }
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long x;cin >> x;
    if (preCalculate[ x ])cout << "YES" << endl;
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
    calculate();
    while (test--) {
        solve();
    }
}