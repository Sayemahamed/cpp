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
bool pick( int i, vector<int>& v, int l, int r ) {
    if (i == l || i == r) return 0;
    return v[ i - 1 ] < v[ i ] && v[ i ] > v[ i + 1 ];
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v( n );
    for (auto& i : v) cin >> i;
    int ans = -1, l = -1, r = -1, now = 0;
    for (int i = 1; i + 1 < k; ++i) {
        if (pick( i, v, 0, k - 1 )) ++now;
    }
    ans = now + 1, l = 0, r = k - 1;
    for (int i = k; i < n; ++i) {
        if (pick( i - k + 1, v, i - k, i - 1 )) --now;
        if (pick( i - 1, v, i - k + 1, i )) ++now;
        if (now + 1 > ans) {
            ans = now + 1;
            l = i - k + 1;
            r = i;
        }
    }
    cout << ans << " " << l + 1 << "\n";
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