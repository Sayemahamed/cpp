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
    long long siz, oneCount = 0, i = 0;
    cin >> siz;
    string str;
    cin >> str;
    for (auto& it : str)if (it == '1')oneCount++;
    else {
        cout << oneCount;
        oneCount = 0;
    }
    if (oneCount)cout << oneCount;
    if (str[ siz - 1 ] == '0')cout << 0;
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