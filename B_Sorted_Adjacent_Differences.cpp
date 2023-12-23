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
    long long size;cin >> size;
    vector<long long >dat( size ), ans;
    long long i = 0, j = size - 1;
    for (auto& it : dat)cin >> it;
    sort( all( dat ) );
    while (j >= i) {
        ans.push_back( dat[ j ] );
        if (i != j)
            ans.push_back( dat[ i ] );
        i++;
        j--;
    }
    reverse( all( ans ) );
    for (auto& it : ans)cout << it << ' ';
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