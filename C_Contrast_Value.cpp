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

bool isIncreasingSubsequence( vector<long long >& data, long long start ) {
    return data[ start ] <= data[ start + 1 ] and data[ start + 1 ] <= data[ start + 2 ];
}
bool isDecreasingSubsequence( vector<long long >& data, long long start ) {
    return data[ start ] >= data[ start + 1 ] and data[ start + 1 ] >= data[ start + 2 ];
}
vector<long long > getUniqueElements( vector<long long >& data ) {
    vector<long long >ans;
    long long pre = -1;
    for (auto& it : data) {
        if (it != pre) {
            ans.push_back( it );
            pre = it;
        }
    }
    return ans;
}
//----------------------------------------------------------------//
// solve function//
void solve() {
    long long siz;cin >> siz;
    vector<long long>data( siz );
    for (auto& it : data)cin >> it;
    vector<long long>uni = getUniqueElements( data );
    long long ans = uni.size();
    if (ans > 2)
        for (long long i = 0;i < uni.size() - 2;i++) {
            ans -= isDecreasingSubsequence( uni, i );
            ans -= isIncreasingSubsequence( uni, i );
        }
    cout << ans << endl;
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