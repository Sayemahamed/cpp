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
    long long siz;cin >> siz;
    string str;cin >> str;
    map<char, char>mp;
    for (char i = '1';i <= '9';i++) {
        char c;cin >> c;
        mp[ i ] = c;
    }
    long long i = 0;
    while (i < siz and mp[ str[ i ] ] <= str[ i ])i++;
    for (;i < siz;i++) {
        if (mp[ str[ i ] ] < str[ i ])break;
        str[ i ] = mp[ str[ i ] ];
    }
    cout << str << endl;
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