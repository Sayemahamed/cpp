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
long long mod = 998244353;
//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve() {
    string str;cin >> str;
    long long remove = 0, ans = 1, j = 0;
    for (long long i = 0; i < str.length();)
    {
        j = i + 1;
        while (j < str.length() && str[ i ] == str[ j ])j++;
        remove += (j - i) - 1;
        ans *= j - i;
        i = j;
        ans %= mod;
    }
    for (long long i = 2;i <= remove;i++) { ans *= i;ans %= mod; }
    cout << remove << " " << ans << endl;
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