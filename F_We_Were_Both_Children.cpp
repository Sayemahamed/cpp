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
    long long siz, x;cin >> siz;
    vector<long long>ans( siz + 1, 0 );
    map<long long, long long>frequencies;
    for (long long i = 0; i < siz;i++) {
        cin >> x;
        if (x <= siz)frequencies[ x ]++;
    }
    for (auto& it : frequencies) {
        long long i = 1;
        while (it.first * i <= siz) {
            ans[ it.first * i++ ] += it.second;
        }
    }
    cout<<*max_element(ans.begin(),ans.end())<<endl;
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