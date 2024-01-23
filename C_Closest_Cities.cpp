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
    long long numberOfCities;cin >> numberOfCities;
    vector<long long>data( numberOfCities ), left( numberOfCities, 0 ), right( numberOfCities, 0 );
    for (auto& it : data)cin >> it;
    right[ 1 ] = 1;
    for (long long i = 1;i < numberOfCities - 1;i++) {
        if (abs( data[ i ] - data[ i - 1 ] ) > abs( data[ i ] - data[ i + 1 ] ))
            right[ i + 1 ] = 1;
        else right[ i + 1 ] = abs( data[ i ] - data[ i + 1 ] );
        right[ i + 1 ] += right[ i ];
    }
    left[ numberOfCities - 2 ] = 1;
    for (long long i = numberOfCities - 2;i > 0;i--) {
        if (abs( data[ i ] - data[ i + 1 ] ) > abs( data[ i ] - data[ i - 1 ] ))
            left[ i - 1 ] = 1;
        else left[ i - 1 ] = abs( data[ i ] - data[ i - 1 ] );
        left[ i - 1 ] += left[ i ];
    }
    // for (auto& it : right)cout << it << ' ';
    // cout << endl;
    // for (auto& it : left)cout << it << ' ';
    long long query;cin >> query;
    while (query--) {
        long long a, b;cin >> a >> b;
        if (a < b)cout << right[ b - 1 ] - right[ a - 1 ] << endl;
        else cout << left[ b - 1 ] - left[ a - 1 ] << endl;
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