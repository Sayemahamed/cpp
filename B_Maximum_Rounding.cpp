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
    string str;cin >> str;
    if (str.length() == 1) {
        if (str[ 0 ] < '5')
            cout << str << endl;
        else cout << 10 << endl;
    }
    else {
        long long idx = str.length() - 1, lastChanged=-1;
        for (;idx >= 0; idx--) {
            if (str[ idx ] >= '5') {
                lastChanged = idx;
                if (idx == 0) {
                    lastChanged = 1;
                    str = '1' + str;
                }
                else {
                    str[ idx - 1 ]++;
                }
            }
        }
        if(lastChanged!=-1)
        for (long long i = lastChanged; i < str.length();i++)str[ i ] = '0';
        cout << str << endl;
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