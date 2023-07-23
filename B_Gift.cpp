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
long long numberOfGifts, numberOfChoices;
unsigned long long num = 1;

//----------------------------------------------------------------//
// helper functions //
void print( string& str, string ans ) {
    if (ans.length() == numberOfGifts) {
        cout << ans << endl;
        return;
    }
    for (auto& it : str) {
        print( str, ans + it );
    }
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    cin >> numberOfGifts >> numberOfChoices;
    for (long long i = 0; i < numberOfGifts; i++) num *= numberOfChoices;
    cout << num << endl;
    string choices = "";
    for (long long i = 0;i < numberOfChoices;i++)choices += 'a' + i;
    print( choices, "" );
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