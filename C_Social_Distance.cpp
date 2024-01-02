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
inline int isPossible( string str, long long distance, long long curLocation ) {
    for (long long i = curLocation;i <= distance + curLocation and i < str.length();i++)
        if (str[ i ] == '1')return i+1;
    return curLocation + distance +1;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long size, distance;cin >> size >> distance;
    string str;cin >> str;
    long long ans = 0;
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