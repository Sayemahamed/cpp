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
long long getSum( vector<long long>& a, vector<long long>& b ) {
    long long sum = 0, mx = 0, tmp;
    for (long long i = 0; i < a.size(); ++i) {
        tmp = a[ i ] * b[ i ];
        sum += tmp;
        mx = max( mx, tmp );
    }
    return sum - mx;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long number, ans = 2;
    cin >> number;
    vector<long long>a( number + 1 ), b( number + 1 );
    for (long long i = 0;i <= number;i++) {
        a[ i ] = i;
        b[ i ] = i;
    }
    for (long long i = 2;i < number;i++) {
        reverse( b.begin() + i, b.end() );
        ans = max( ans, getSum( a, b ) );
        reverse( b.begin() + i, b.end() );
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
