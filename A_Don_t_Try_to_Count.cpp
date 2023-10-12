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
    long long a, b;cin >> a >> b;
    string str1, str2;
    cin >> str1 >> str2;
    long long i = 0;
    for (;i < 20;i++) {
        if (str1.find( str2 ) != string::npos)break;
        str1 = str1 + str1;
    }
    if (str1.find( str2 ) != string::npos)cout << i << endl;
    else cout << -1 << endl;
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