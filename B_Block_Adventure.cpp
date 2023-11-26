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
    long long columns, beginning, limit;
    bool isPossible = true;
    cin >> columns >> beginning >> limit;
    vector<long long>data( columns );
    for (auto& it : data)cin >> it;
    for (long long i = 0; i < columns; i++)
    {
        if (i != columns - 1)
        {
            beginning += data[ i ];
            beginning -= max( data[ i + 1 ] - limit, 0LL );
            if (beginning < 0)isPossible = false;
        }
    }
    if (isPossible)cout << "YES" << endl;
    else cout << "NO" << endl;
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