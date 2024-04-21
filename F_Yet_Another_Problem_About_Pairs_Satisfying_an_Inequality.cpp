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
struct Node
{
    long long value, index;
    Node( long long value, long long index ) {
        this->value = value;
        this->index = index;
    }
    Node() {}
};

//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve() {
    long long size;cin >> size;
    vector<Node >data( size );
    for (long long i = 0;i < size;i++) {
        cin >> data[ i ].value;
        data[ i ].index = i + 1;
    }
    long long ans = 0;
    map<long long, long long>frequency;
    for (long long i = size - 1;i >= 0;i--) {
        if (data[ i ].value < data[ i ].index) {
            frequency[ data[ i ].value ]++;
            for (auto it = frequency.rbegin();it != frequency.rend();it++) {
                if (it->first <= data[ i ].value)break;
                ans += it->second;
            }
        }
    }
    cout << ans << endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    int test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
}