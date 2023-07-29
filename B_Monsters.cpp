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
struct monsters {
    long long health, index;
    monsters() {}
};
//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve() {
    long long numberOfMonsters, power;cin >> numberOfMonsters >> power;
    vector<monsters>data( numberOfMonsters );
    for (long long i = 1;i <= numberOfMonsters;i++) {
        cin >> data[ i - 1 ].health;
        if (data[ i - 1 ].health > power)
            data[ i - 1 ].health %= power;
        if (data[ i - 1 ].health == 0)data[ i - 1 ].health = power;
        data[ i - 1 ].index = i;
    }

    sort( data.begin(), data.end(), []( const monsters& a, const monsters& b ) {
        if (a.health != b.health) return a.health > b.health;
        else return a.index < b.index;
        } );
    for (auto& it : data)cout << it.index << ' ';
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