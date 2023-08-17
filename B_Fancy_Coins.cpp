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
    long long target, constantValue, a1, a2;cin >> target >> constantValue >> a1 >> a2;
    target -= constantValue * (min( target / constantValue, a2 ));
    target -= a1;
    if (target <= 0)cout << 0 << endl;
    else if (a1 + target < constantValue)cout << target << endl;
    else {
        if (a1>= constantValue-( target % constantValue ) and ( target % constantValue ))
            cout << target / constantValue + 1 << endl;
        else
            cout << target / constantValue + target % constantValue << endl;
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