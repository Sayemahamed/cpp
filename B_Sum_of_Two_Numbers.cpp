#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//

//----------------------------------------------------------------//
// helper functions //
long long sod( long long num ) {
    long long ans = 0;
    while (num) {
        ans += num % 10;
        num /= 10;
    }
    return ans;
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long n;
    cin >> n;

    long long a = n / 2, b = n - a, temp = 9, p = 1;

    long long chk = 0;
    while (abs( sod( a ) - sod( b ) ) > 1) {
        long long x = abs( sod( a ) - sod( b ) );
        if (x > 9) {
            a -= temp * p;
            b += temp * p;
            p *= 10;
            continue;
        }
        x /= 2;
        a -= x * p;
        b += x * p;
    }
    cout << a << ' ' << b << endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
}