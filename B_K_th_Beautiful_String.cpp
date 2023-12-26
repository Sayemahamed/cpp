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
long long sumTill( long long number ) {
    return (number * (number + 1)) / 2;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long length, position;
    cin >> length >> position;
    string ansString = "";
    for (long long i = 0;i < length;i++)ansString += 'a';
    long long low = 0, high = length, mid;
    while (high - low > 1) {
        mid = (low + high) >> 1;
        if (sumTill( mid - 1 ) + 1 > position)high = mid;
        else low = mid;
    }
    ansString[ length - low - 1 ] = 'b';
    ansString[ length - (position - sumTill( low - 1 )) ] = 'b';
    cout << ansString << endl;
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