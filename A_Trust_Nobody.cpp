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
    long long numberOfPerson;
    cin >> numberOfPerson;
    vector<long long> statement( numberOfPerson );
    for (auto& it : statement) {
        cin >> it;
    }
    for (int cnt_liars = 0; cnt_liars < numberOfPerson; cnt_liars++) {
        int actual = 0;
        for (auto it : statement) {
            if (!(cnt_liars >= it)) {
                ++actual;
            }
        }
        if (actual == cnt_liars) {
            cout << cnt_liars << endl;
            return;
        }
    }
    cout << -1 << endl;
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