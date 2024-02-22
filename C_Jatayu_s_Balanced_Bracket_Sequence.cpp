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
    int n;cin >> n;
    string str;cin >> str;
    vector<int>dat( 2 * n, 0 );
    int cnt = 0;
    for (int i = 0;i < 2 * n;i++) {
        if (str[ i ] == '(')cnt++;
        dat[ i ] = cnt;
        if (str[ i ] == ')')cnt--;
    }
    long long ans = 1;
    for (int i = 0;i < 2 * n - 1;i++) {
        if (dat[ i ] < dat[ i + 1 ]) {
            ans++;
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