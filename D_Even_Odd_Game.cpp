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
    long long numbers, alice = 0, bob = 0, x;cin >> numbers;
    map<long long, long long >even, odd;
    for (long long i = 0;i < numbers;i++) {
        cin >> x;
        if (x & 1)odd[ x ]++;
        else even[ x ]++;
    }
    for (long long i = 0;i < numbers;i++) {
        if (i & 1) {
            if (even.size() == 0 or (odd.size() and odd.rbegin()->first >= even.rbegin()->first)) {
                bob += odd.rbegin()->first;
                odd[ odd.rbegin()->first ]--;
            }
            else even[ even.rbegin()->first ]--;
        }
        else {
            if (odd.size() == 0 or (even.size() and even.rbegin()->first >= odd.rbegin()->first)) {
                alice += even.rbegin()->first;
                even[ even.rbegin()->first ]--;
            }
            else odd[ odd.rbegin()->first ]--;
        }
        if (even.size() and even.rbegin()->second == 0)even.erase( even.find( even.rbegin()->first ) );
        if (odd.size() and odd.rbegin()->second == 0)odd.erase( odd.find( odd.rbegin()->first ) );
    }
    if (bob > alice)cout << "Bob" << endl;
    else if (alice > bob)cout << "Alice" << endl;
    else cout << "Tie" << endl;
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