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
    long long siz;
    cin >> siz;
    vector<long long>data( siz + 1 );
    set<pair<long long, long long>>index;
    for (long long i = 1; i <= siz;i++) {
        cin >> data[ i ];
        if (data[ i ] > 0)
            index.insert( { data[ i ], i } );
    }
    vector<pair<long long, long long>>ans;
    for (long long i = 1; i < siz;i++) {
        while (data[ i ] > data[ i + 1 ]) {
            pair<long long, long long> tmp;
            if (index.lower_bound( { data[ i ] - data[ i + 1 ],0 } ) != index.end())
                tmp = *index.lower_bound( { data[ i ] - data[ i + 1 ],0 } );
            else  tmp = *index.rbegin();
            data[ i + 1 ] += tmp.first;
            ans.push_back( { i + 1,tmp.second } );
        }
        index.insert( { data[ i + 1 ],i + 1 } );
    }
    while (data[ siz ] < data[ siz - 1 ]) {
        auto tmp = *index.rbegin();
        data[ siz ] += tmp.first;
        ans.push_back( { siz,tmp.second } );
    }
    cout << ans.size() << endl;
    for (auto& it : ans) {
        cout << it.first << " " << it.second << endl;
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