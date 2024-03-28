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
    long long friends;cin >> friends;
    vector<int>morning( friends ), evening( friends );
    for (auto& it : morning)cin >> it;
    for (auto& it : evening)cin >> it;
    long long  point = friends - 1,ans=0;
    for (int i = friends - 1;i >= 0;i--) {
        while (i >= 0 and morning[ i ] != evening[ point ])i--;
        if (i >= 0 and morning[ i ] == evening[ point ]) {
            point--;
            ans++;
        }
    }
    cout << friends - ans << endl;
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