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
    long long siz;
    cin >> siz;
    bool ans = true;
    vector<long long >data( siz ), tmp( siz );
    for (long long i = 0; i < siz; i++)
    {
        cin >> data[ i ];
        tmp[ i ] = data[ i ];
    }
    sort( tmp.begin(), tmp.end() );
    for (long long i = 0; i < siz; i++)
    {
        if ((tmp[ i ] & 1) != (data[ i ] & 1))
            ans = false;
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

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