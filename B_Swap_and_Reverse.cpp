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
    long long siz, k;cin >> siz >> k;
    string str;cin >> str;
    vector<char>even, odd;
    for (long long i = 0;i < siz;i++) {
        if (i & 1)even.push_back( str[ i ] );
        else odd.push_back( str[ i ] );
    }
    if (k & 1) {
        sort( even.begin(), even.end() );
        sort( odd.begin(), odd.end() );
        for (long long i = 0;i < odd.size();i++) {
            cout << odd[ i ];
            if (i < even.size())cout << even[ i ];
        }
        cout << endl;
    }
    else {
        sort( str.begin(), str.end() );
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
