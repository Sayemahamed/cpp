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
    long long siz;cin >> siz;
    set<long long>data;
    for (long long i = 1;i <= siz;i++)data.insert( i );
    for (long long i = siz >> 1;i > 2;i--) {
        cout << i << " ";
        cout << (i << 1) << " ";
        data.erase( i );
        data.erase( (i << 1) );
    }
    for (auto& it : data)cout << it << ' ';
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