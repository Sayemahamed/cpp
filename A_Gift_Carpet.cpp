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
    long long y_axis, x_axis;
    cin >> y_axis >> x_axis;
    vector<vector<char>>carpet( y_axis, vector<char>( x_axis ) );
    for (auto& it : carpet)for (auto& it2 : it)cin >> it2;
    auto lambda = [ &carpet, y_axis ]( char x, long long index ) {
        for (long long i = 0;i < y_axis;i++)if (carpet[ i ][ index ] == x)return true;
        return false;
        };
    string str = "vika";
    long long point = 0;
    for (long long i = 0;i < x_axis;i++) {
        if (lambda( str[ point ], i )) {
            point++;
            if (point == 4)break;
        }
    }
    if (point == 4)cout << "YES" << endl;
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