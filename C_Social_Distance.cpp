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
    long long size, ans = 0, distance;cin >> size >> distance;
    string str;cin >> str;
    if (str.length() == 1 and str[ 0 ] == '0') {
        cout << 1 << endl;
        return;
    }
    if (distance == 0) {
        for (auto& it : str)if (it == '0')ans++;
        cout << ans << endl;
        return;
    }
    for (long long i = 0;i < size;) {
        if (str[ i ] == '1')
            i += distance + 1;
        else {
            long long  j = i + 1;
            while (j < str.length() and j <= i + distance + 1) {
                if (str[ j ] == '1') {
                    i = j + 1;
                    continue;
                }
                j++;
            }
            ans++;
            i = j;
        }
    }
    cout << ans << endl;
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