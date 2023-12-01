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
long long getLastIndexOfZero( string str ) {
    for (long long i = str.size() - 1;i >= 0;i--) {
        if (str[ i ] == '0') {
            return i;
        }
    }
    return 0;
}
long long getFirstIndexOfOne( string str ) {
    for (long long i = 0;i < str.size();i++) {
        if (str[ i ] == '1') {
            return i;
        }
    }
    return str.size();
}
//----------------------------------------------------------------//
// solve function//
void solve() {
    long long stringSize;cin >> stringSize;
    string str;cin >> str;
    for (long long i = getFirstIndexOfOne( str );i < getLastIndexOfZero( str );i++) {
        str[ i ] = 'x';
    }
    for (auto& it : str)if (it != 'x')cout << it;
    cout << endl;
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