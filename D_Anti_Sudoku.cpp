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
    vector<vector<char>>dat( 9, vector<char>( 9 ) );
    for (auto& it : dat)for (auto& it1 : it)cin >> it1;
    if (dat[ 0 ][ 0 ] == '1')dat[ 0 ][ 0 ] = '2';
    else dat[ 0 ][ 0 ] = '1';
    if (dat[ 8 ][ 8 ] == '1')dat[ 8 ][ 8 ] = '2';
    else dat[ 8 ][ 8 ] = '1';
    if (dat[ 3 ][ 1 ] == '1')dat[ 3 ][ 1 ] = '2';
    else dat[ 3 ][ 1 ] = '1';
    if (dat[ 1 ][ 3 ] == '1')dat[ 1 ][ 3 ] = '2';
    else dat[ 1 ][ 3 ] = '1';
    if (dat[ 4 ][ 4 ] == '1')dat[ 4 ][ 4 ] = '2';
    else dat[ 4 ][ 4 ] = '1';
    if (dat[ 6 ][ 2 ] == '1')dat[ 6 ][ 2 ] = '2';
    else dat[ 6 ][ 2 ] = '1';
    if (dat[ 2 ][ 6 ] == '1')dat[ 2 ][ 6 ] = '2';
    else dat[ 2 ][ 6 ] = '1';
    if (dat[ 5 ][ 7 ] == '1')dat[ 5 ][ 7 ] = '2';
    else dat[ 5 ][ 7 ] = '1';
    if (dat[ 7 ][ 5 ] == '1')dat[ 7 ][ 5 ] = '2';
    else dat[ 7 ][ 5 ] = '1';
    for (auto& it : dat) {
        for (auto& it1 : it)cout << it1;
        cout << endl;
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