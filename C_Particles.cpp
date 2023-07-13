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
    long long arrSize;cin >> arrSize;
    bool exist = false;
    vector<long long>arr( arrSize );
    for (auto& it : arr) {
        cin >> it;
        if (it >= 0)exist = true;
    }
    long long odd = 0, even = 0;
    if (exist) {
        for (long long i = 0; i < arrSize;i++) {
            if (i & 1) {
                if (arr[ i ] > 0)even += arr[ i ];
            }
            else {
                if (arr[ i ] > 0)odd += arr[ i ];
            }
        }
        cout << max( even, odd ) << endl;
    }
    else {
        cout << *max_element( arr.begin(), arr.end() ) << endl;
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