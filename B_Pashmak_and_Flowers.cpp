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
    long long flowers, flower;cin >> flowers;
    map<long long, long long>data;
    for (long long i = 0;i < flowers;i++) {
        cin >> flower;
        data[ flower ]++;
    }
    if (data.rbegin()->first != data.begin()->first)
        cout << data.rbegin()->first - data.begin()->first << ' ' << data.rbegin()->second * data.begin()->second << endl;
    else
        cout << data.rbegin()->first - data.begin()->first << ' ' << flowers * (flowers - 1) / 2 << endl;
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