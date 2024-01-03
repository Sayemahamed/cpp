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
struct report
{
    bool possible;
    long long location;
    report( bool possible, long long location ) {
        this->possible = possible;
        this->location = location;
    }
};

//----------------------------------------------------------------//
// helper functions //
report isPossible( string str, long long distance, long long location ) {
    for (long long i = location; i < str.length() and i <= location + distance; i++) {
        if (str[ i ] == '1')return report( false, i );
    }
    return report( true, location + distance + 1 );
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long size, distance;cin >> size >> distance;
    string str;cin >> str;
    long long ans = 0;
    for (long long i = 0; i < size;) {
        if (str[ i ] == '1')i += distance + 1;
        else {
            auto data = isPossible( str, distance, i );
            if (data.possible) {
                ans++;
                i = data.location;
            }
            else {
                i = data.location;
            }
        }
    }
    cout << ans << endl;
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