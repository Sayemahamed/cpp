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
    long long numberOfMountains, index, difference;cin >> numberOfMountains;
    vector<long long>mountainsHeights( numberOfMountains );
    for (auto& it : mountainsHeights)cin >> it;
    sort( mountainsHeights.begin(), mountainsHeights.end() );
    difference = mountainsHeights.back();
    // cout<<difference<<endl;
    for (long long i = 0; i < numberOfMountains - 1; i++) {
        if (mountainsHeights[ i + 1 ] - mountainsHeights[ i ] < difference) {
            difference = mountainsHeights[ i + 1 ] - mountainsHeights[ i ];
            index = i;
        }
    }
    if (numberOfMountains == 2)index = 1;
    for (long long i = index + 1; i < numberOfMountains;i++) {
        cout << mountainsHeights[ i ] << " ";
    }
    for (long long i = 0; i <= index;i++) {
        cout << mountainsHeights[ i ] << " ";
    }
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