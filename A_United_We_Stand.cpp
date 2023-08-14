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
    long long siz, x;cin >> siz;
    map<long long, long long>data;
    for(long long i=0;i<siz;i++) {
        cin >> x;
        data[ x ]++;
    }
    long long tmp = data.rbegin()->first;
    if (data.size() == 1)cout << -1 << endl;
    else {
        cout << siz - data.rbegin()->second << ' ' << data.rbegin()->second << endl;
        for (auto& it : data) {
            if (it.first != tmp) {
                while (it.second--)cout << it.first << " ";
            }
            else {
                cout << endl;
                while (it.second--)cout << it.first << " ";
                cout << endl;
            }
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