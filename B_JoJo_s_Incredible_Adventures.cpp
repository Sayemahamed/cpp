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
    string str;
    cin >> str;
    str += str;
    long long oneCount = 0, tmp = 0;
    for (auto& it : str) {
        tmp = it == '1' ? tmp + 1 : 0;
        oneCount = max( oneCount, tmp );
    }
    if (oneCount > str.length() / 2) {
        cout << (long long)(str.length() / 2) * (str.length() / 2) << endl;
    }
    else {
        cout << (((oneCount + 1) / 2) * ((oneCount + 2) / 2)) << endl;
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