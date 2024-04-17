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
    long long numberOfElements, element, minimumFrequency;cin >> numberOfElements >> minimumFrequency;
    map<long long, long long >frequency;
    for (long long i = 0;i < numberOfElements;i++) {
        cin >> element;
        frequency[ element ]++;
    }
    long long difference = -1, x = -1, y = -1, leadingPointer = 0;
    vector<long long>tracker( frequency.size() + 1, 0 );
    for (auto& it : frequency) {
        tracker[ leadingPointer ] = it.first;leadingPointer++;
    }
    leadingPointer = 0;
    for (long long i = 0;i < frequency.size();i++) {
        while (leadingPointer < frequency.size() and tracker[ leadingPointer + 1 ] - tracker[ leadingPointer ] == 1 and frequency[ tracker[ leadingPointer + 1 ] ] >= minimumFrequency)leadingPointer++;
        while (frequency[ tracker[ i ] ] >= minimumFrequency and tracker[ leadingPointer ] - tracker[ i ] > difference) {
            difference = tracker[ leadingPointer ] - tracker[ i ];
            x = tracker[ i ];y = tracker[ leadingPointer ];
        }
        leadingPointer = max( i + 1, leadingPointer );
    }
    if (difference != -1) {
        cout << x << ' ' << y << endl;
    }
    else cout << -1 << endl;
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