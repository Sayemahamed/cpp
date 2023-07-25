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
    vector<long long>dat( siz );
    for (auto& it : dat)cin >> it;
    if (dat[ siz - 1 ])cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        long long tempAns = 0;
        for (long long i = siz - 1;i >= 0;i--) {
            if (dat[ i ]) {
                tempAns++;
                if (dat[ i - 1 ] == 0 and i != 0) {
                    cout << tempAns << " ";
                    tempAns = 0;
                }
                else if (i != 0) {
                    cout << 0 << ' ';
                }
            }
            else  cout << 0 << ' ';
        }
        if (tempAns)cout << tempAns << endl;
        else cout << endl;
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