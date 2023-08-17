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
    if (str == "()")cout << "NO" << endl;
    else {
        bool ok = true;
        for (long long i = 0;i < str.length() - 1;i++)if (str[ i ] == str[ i + 1 ])ok = false;
        if (ok) {
            cout << "YES" << endl;
            long long len = str.length();
            for (long long i = 0;i < len;i++)cout << '(';
            for (long long i = 0;i < len;i++)cout << ')';
            cout << endl;
        }
        else {
            cout << "YES" << endl;
            long long len = str.length();
            while (len--)cout << "()";
            cout << endl;
        }
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