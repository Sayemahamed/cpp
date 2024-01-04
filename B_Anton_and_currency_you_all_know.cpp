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
    bool isPossible = false;
    vector<long long >idx;
    for (long long i = 0;i < str.length() - 1;i++)if ((str[ i ] - '0') % 2 == 0)idx.push_back( i );
    for (auto& it : idx) {
        if (str[ it ] < str[ str.length() - 1 ]) {
            swap( str[ it ], str[ str.length() - 1 ] );
            isPossible = true;
            break;
        }
    }
    if (idx.size() and !isPossible) {
        swap( str[ idx.back() ], str[ str.length() - 1 ] );
        isPossible = true;
    }
    if (isPossible)cout << str << endl;
    else cout << -1 << endl;
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