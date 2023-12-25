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
    long long size;cin >> size;
    vector<long long>arr( size );
    long long val, indx;
    map<long long, long long >idx;
    vector < pair<long long, long long>>ans;
    for (long long i = 0;i < size;i++) {
        cin >> arr[ i ];
        idx[ arr[ i ] ] = i;
    }
    // for (auto& it : idx)cout << it.first << ' ' << it.second << endl;
    for (long long i = 0;i < size - 1;i++) {
        while (arr[ i ] > arr[ i + 1 ]) {
            if (idx.upper_bound( arr[ i ] - arr[ i + 1 ] ) != idx.end()) {
                indx = idx.upper_bound( arr[ i ] - arr[ i + 1 ] )->second;
                val = idx.upper_bound( arr[ i ] - arr[ i + 1 ] )->first;
            }
            else {
                indx = idx.rbegin()->second;
                val = idx.rbegin()->first;
            }
            arr[ i + 1 ] += val;
            idx[ arr[ i + 1 ] ] = i + 1;
            ans.push_back( { i + 2, indx + 1 } );
        }
    }
    cout << ans.size() << endl;
    // cout<<is_sorted(all(arr))<<endl;
    for (auto& it : ans)cout << it.first << ' ' << it.second << endl;
    // for (auto& it : arr)cout << it << ' ';
    // cout << endl;
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