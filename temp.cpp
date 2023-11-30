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
class node {
public:
    long long frequency;
    char character;
    node* smaller;
    node* greater;
    node( const node& temp ) {
        this->frequency = temp.frequency;
        this->character = temp.character;
        this->smaller = temp.smaller;
        this->greater = temp.greater;
    }
    node( char character, long long frequency ) {
        this->frequency = frequency;
        this->character = character;
        this->smaller = NULL;
        this->greater = NULL;
    }
    node() {}
};
//----------------------------------------------------------------//
// helper functions //
void print( node* ans, string str ) {
    if (ans->character != '1') {
        cout << ans->character << ' ' << str << endl;
        return;
    }
    // cout << ans->frequency << ' ' << ans->character << endl;
    print( ans->smaller, str + '0' );
    print( ans->greater, str + '1' );
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    string inputString;getline( cin, inputString );
    // cout << inputString << endl;
    map<char, long long >frequency;
    for (auto& it : inputString)frequency[ it ]++;
    multimap<long long, node>dat;
    for (auto& it : frequency) {
        node temp( it.first, it.second );
        dat.insert( pair<long long int, node>( it.second, temp ) );
    }
    while (dat.size() > 1) {
        node temp( dat.begin()->second );
        dat.erase( dat.begin() );
        node ans( '1', dat.begin()->second.frequency + temp.frequency );
        ans.smaller = new node( temp );
        ans.greater = new node( dat.begin()->second );
        dat.erase( dat.begin() );
        dat.insert( pair<long long int, node>( ans.frequency, ans ) );
    }
    print( &dat.begin()->second, "" );
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