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
double reachCount = 0, notReachCount = 0;
long long goal = 0;
//----------------------------------------------------------------//
// helper functions //
void visit( string str, long long index, long long position ) {
    if (index == str.length()) {
        if (position == goal)reachCount++;
        else notReachCount++;
    }
    else {
        if (str[ index ] == '+')
            visit( str, index + 1, position + 1 );
        else if (str[ index ] == '-')
            visit( str, index + 1, position - 1 );
        else {
            visit( str, index + 1, position + 1 );
            visit( str, index + 1, position - 1 );
        }
    }
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    string str1, str2;
    cin >> str1 >> str2;
    for (auto& it : str1)if (it == '+')goal++; else goal--;
    visit( str2, 0, 0 );
    cout << fixed << setprecision( 12 ) << reachCount / (reachCount + notReachCount) << endl;
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