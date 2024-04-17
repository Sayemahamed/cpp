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
long long stringToInt( string str ) {
    long long ans = 0, multiplier = 1;
    for (long long i = 0;i < str.length();i++) {
        ans += multiplier * (str[ str.length() - 1 - i ] - '0');
        multiplier *= 10;
    }
    return ans;
}
void seedData( string str, set<long long >& memoise ) {
    if (str.length() > 9)return;
    if (str != "1")
        memoise.insert( stringToInt( str ) );
    seedData( str + '0', memoise );
    seedData( str + '1', memoise );
}
bool isPossible( long long number, set<long long>& memoise ) {
    if (memoise.find( number ) != memoise.end() or number == 1 or number == 0)return true;
    for (auto& it : memoise) {
        if (it > number)break;
        if (number % it == 0) {
            if (isPossible( number / it, memoise )) {
                memoise.insert( number );
                return true;
            }
        }
    }
    return false;
}
//----------------------------------------------------------------//
// solve function//
void solve( set<long long>& memoise ) {
    long long number;cin >> number;
    if (isPossible( number, memoise ))cout << "YES" << endl;
    else cout << "NO" << endl;
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    int test = 1;
    set<long long>memoise;
    seedData( "1", memoise );
    cin >> test;
    while (test--) {
        solve( memoise );
    }
}