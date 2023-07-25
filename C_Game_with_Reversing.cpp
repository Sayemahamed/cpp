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
    long long siz, min1 = 0, min2 = 0;cin >> siz;
    string s1, s2;
    cin >> s1 >> s2;
    for (long long i = 0; i < siz; i++) {
        if (s1[ i ] != s2[ i ])min1++;
        if (s1[ i ] != s2[ siz - i - 1 ])min2++;
    }
    long long ans1 = min1 * 2;
    if (min1 & 1)ans1--;
    long long ans2 = min2 * 2;
    if (min2 & 1);
    else if(ans2 != 0) ans2--;
    if (ans2 == 0)ans2 = 2;
    ans1 = max( ans1, (long long)0 );
    ans2 = max( ans2, (long long)0 );
    cout << min( ans1, ans2 ) << endl;
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