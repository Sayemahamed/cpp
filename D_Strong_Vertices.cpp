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
    long long siz, x;
    cin >> siz;
    vector<long long> a( siz + 1 );
    map<long long, long long >data;
    for (long long i = 1;i <= siz;i++)cin >> a[ i ];
    for (long long i = 1;i <= siz;i++) {
        cin >> x;
        a[ i ] -= x;
        data[ a[ i ] ]++;
    }
    long long tmp = data.rbegin()->first;
    vector<long long>ans;
    for (long long i = 1;i <= siz;i++) {
        if (a[ i ] == tmp)ans.push_back( i );
    }
    cout << ans.size() << endl;
    for (auto& it : ans)cout << it << ' ';
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