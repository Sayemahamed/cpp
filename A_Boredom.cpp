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
struct value {
    long long number, total;
    value() { number = -1;total = 0; }
};
//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve() {
    long long x, numbers;cin >> numbers;
    map<long long, long long>frequency;
    for (long long i = 0; i < numbers;i++) {
        cin >> x;
        frequency[ x ]++;
    }
    vector<value>dat(frequency.size());
    long long i=0;
    for(auto&it:frequency){
        dat[i].number=it.first;
        dat[i++].total=it.second*it.first;
    }
    for(auto&it:dat)cout<<it.total<<endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    // cin >> test;
    while (test--) {
        solve();
    }
}