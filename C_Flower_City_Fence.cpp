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
    long long siz, x;cin >> siz;
    bool isSame = true;
    vector<long long>data( siz, 0 );
    for (auto& it : data)cin >> it;
    if (data[ 0 ] != siz)isSame = false;
    else {
        reverse( data.begin(), data.end() );
        long long i = 0, j = 0;
        for (long long i = 0; i < siz;i++) {
            while (data[ j ] <= i)j++;
            if (data[ siz - i - 1 ] != siz - j)isSame = false;
        }
    }
    if (isSame)cout << "YES" << endl;
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