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
    vector<long long>data( siz );
    set<long long>tmp;
    for (auto& it : data) { cin >> it;tmp.insert( it ); }
    long long left = 0, right = siz - 1;
    while (left < right) {
        if (data[ left ] == *tmp.begin() or data[ left ] == *tmp.rbegin()) {
            tmp.erase( data[ left ] );
            left++;
        }
        else if (data[ right ] == *tmp.begin() or data[ right ] == *tmp.rbegin()) {
            tmp.erase( data[ right ] );
            right--;
        }
        else break;
    }
    if (left >= right)cout << -1 << endl;
    else cout << left + 1 << ' ' << right + 1 << endl;
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