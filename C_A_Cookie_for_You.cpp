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
    unsigned long long vanilla, chocolate, hasBrain, dontHave;
    cin >> vanilla >> chocolate >> hasBrain >> dontHave;
    bool isPossible = true;
    if (vanilla + chocolate < hasBrain + dontHave)isPossible = false;
    if (min( vanilla, chocolate ) < dontHave)isPossible = false;
    if (isPossible)cout << "Yes" << endl;
    else cout << "No" << endl;
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