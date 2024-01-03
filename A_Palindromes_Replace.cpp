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
    for (long long i = 0;i <= str.length() / 2;i++) {
        if (str[ i ] == '?' and str[ str.length() - 1 - i ] == '?') {
            str[ i ] = 'a';str[ str.length() - 1 - i ] = 'a';
        }
        else if ((str[ i ] == '?' or str[ str.length() - 1 - i ] == '?')) {
            if (str[ i ] == '?')str[ i ] = str[ str.length() - 1 - i ];
            else str[ str.length() - 1 - i ] = str[ i ];
        }
    }
    cout << str << endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    // cin >> test;
    while (test--) {
        solve();
    }
}