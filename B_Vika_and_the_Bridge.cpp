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
    long long length, numberOfColors, x, ans = INT64_MAX;cin >> length >> numberOfColors;
    map<long long, vector<long long> > colors;
    for (long long i = 0; i < length; i++) {
        cin >> x;
        colors[ x ].push_back( i );
    }
    for (auto& it : colors) {
        map< long long, long long>tempAns;
        for (long long i = 0;i < it.second.size();i++) {
            if (i == 0) {
                tempAns[ it.second[ i ] ]++;
            }
            if (i == it.second.size() - 1) {
                tempAns[ length - (it.second[ i ] + 1) ]++;
            }
            if (i >= 0 and i < it.second.size() - 1) {
                tempAns[ (it.second[ i + 1 ] - it.second[ i ]) - 1 ]++;
            }
        }
        long long temp = 0;
        if (tempAns.rbegin()->second == 1) {
            tempAns[ (tempAns.rbegin()->first) / 2 ]++;
            tempAns.erase( tempAns.find( tempAns.rbegin()->first ) );
        }
        for (auto& it1 : tempAns) {
            temp = max( temp, it1.first );
        }
        ans = min( ans, temp );
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