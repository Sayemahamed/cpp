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
    long long siz;cin >> siz;
    vector<int>data( siz );
    for (auto& it : data)cin >> it;
    vector<bool>betterChoice( siz, false );
    for (long long i = 0;i < siz;i++) {
        if (i < siz and data[ i ] == 1 and betterChoice[ i ] == false) {
            while (i < siz and data[ i ]) {
                i++;
                betterChoice[ i ] = true;
            }
        }
        if (i < siz and data[ i ] == 2 and betterChoice[ i ] == false) {
            long long index = i;
            while (i < siz and data[ i ]) {
                i++;
                betterChoice[ i ] = true;
            }
            while (index > 0 and data[ index ] and betterChoice[ index - 1 ] == false) {
                index--;
                betterChoice[ index ] = true;
            }
        }
    }
    cout << siz - count( betterChoice.begin(), betterChoice.end(), true ) << endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    // cin >> test;
    while (test--) {
        solve();
    }
}