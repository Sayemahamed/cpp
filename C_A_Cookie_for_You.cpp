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
    if (vanilla == chocolate and dontHave) {
        dontHave--;
        vanilla--;
    }
    vanilla -= dontHave / 2;
    chocolate -= (dontHave + 1) / 2;
    if (hasBrain + dontHave < vanilla + chocolate)cout << "No" << endl;
    else cout << "Yes" << endl;
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