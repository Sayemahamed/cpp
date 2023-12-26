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
bool isPerfect( long long number ) {
    long long sum = 0;
    while (number) {
        sum += number % 10;
        number /= 10;
    }
    return sum == 10;
}
//----------------------------------------------------------------//
// solve function//
void solve() {
    long long th;cin >> th;
    long long ans = 19;
    for (long long i = 1;i < th;i++) {
        long long j = 1;
        while (!isPerfect( ans + j * 9 )) j++;
        ans += (j) * 9;
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
    // cin >> test;
    while (test--) {
        solve();
    }
}