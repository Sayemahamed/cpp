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
struct Node {
    long long first, second;
    Node( long long first, long long second ) {
        this->first = first;
        this->second = second;
    }
    Node() {
        this->first = 0;
        this->second = 0;
    }
};
//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve() {
    long long size;cin >> size;
    vector <Node> data( size );
    long long firstSum = 0, secondSum = 0, ans = INT64_MAX;
    if (size == 1)ans = 0;
    for (auto& it : data)cin >> it.first, firstSum += it.first;
    for (auto& it : data)cin >> it.second;
    firstSum -= data[ 0 ].first;
    for (long long i = 0; i < size; i++) {
        if (i)firstSum -= data[ i ].first;
        if (i)secondSum += data[ i - 1 ].second;
        ans = min( ans, max( firstSum, secondSum ) );
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