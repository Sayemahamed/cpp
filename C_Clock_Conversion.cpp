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
int convertToNumber( char a, char b ) {
    return (a - '0') * 10 + b - '0';
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    string str;cin >> str;
    int total = convertToNumber( str[ 0 ], str[ 1 ] ) * 60 + convertToNumber( str[ 3 ], str[ 4 ] );
    // cout << total << endl;
    bool isAM = true;
    if (total > 719)isAM = false;
    if (total < 60)total += 720;

    if (total > 779)total -= 720;
    int hour = total / 60, minute = total % 60;
    if (hour < 10)cout << 0 << hour << ":";
    else cout << hour << ":";
    if (minute < 10)cout << 0 << minute << ' ';
    else cout << minute << ' ';
    if (isAM)cout << "AM" << endl;
    else cout << "PM" << endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    int test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
}