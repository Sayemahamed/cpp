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
inline long long val( long long x ) {
    long long ans = 0;
    while (x) {
        ans += x % 10;
        x /= 10;
    }
    return ans;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long numbers, query;
    cin >> numbers >> query;
    vector<long long>dat( numbers + 1 );
    set<long long >index;
    for (long long i = 1;i <= numbers;i++) {
        cin >> dat[ i ];
        if (dat[ i ] > 9)index.insert( i );
    }
    // for(auto&it:index)cout<<it<<' ';
    // cout<<endl;
    long long x, y;
    while (query--) {
        cin >> x;
        if (x == 1) {
            cin >> x >> y;
            vector<long long>tmp;
            for (auto it = index.lower_bound( x );it != index.upper_bound( y );it++) {
                dat[ *it ] = val( dat[ *it ] );
                if (dat[ *it ] < 10)tmp.push_back( *it );
            }
            for (auto& it : tmp)index.erase( it );
        }
        else {
            cin >> y;
            cout << dat[ y ] << endl;
        }
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