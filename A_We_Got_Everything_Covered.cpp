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
    long long length, characters;cin >> length >> characters;
    char a = 'a';
    for (int i = 0;i < length;i++) {
        if (i < (length + 1) / 2)
            for (int j = 0;j < characters;j++)cout << (char)(a + j);
        else
            for (int j = 0;j < characters;j++)cout << (char)(a + characters - 1 - j);
    }
    cout << endl;
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