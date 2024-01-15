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
    long long boxes, remove = 0, add = 0;cin >> boxes;
    string a, b;cin >> a >> b;
    for (int i = 0;i < boxes;i++) {
        if (a[ i ] == '1' and b[ i ] == '0')remove++;
        else if (a[ i ] == '0' and b[ i ] == '1')add++;
    }
    cout << max( remove, add ) << endl;
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