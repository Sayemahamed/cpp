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
    long long yAxis, xAxis;cin >> yAxis >> xAxis;
    vector<vector<char>>carpet( yAxis, vector<char>( xAxis ) );
    for (auto& it : carpet)for (auto& it2 : it)cin >> it2;
    auto lambda = [ &carpet, yAxis, xAxis ]( long long index, char c ) {
        for (long long i = 0; i < yAxis;i++) {
            if (carpet[ i ][ index ] == c)return true;
        }
        return false;
        };
    string str = "vika";
    long long index = 0;
    for (long long i = 0; i < xAxis;i++) {
        if (lambda( i, str[ index ] ))index++;
        if (index == 4)break;
    }
    if (index == 4)cout << "YES" << endl;
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