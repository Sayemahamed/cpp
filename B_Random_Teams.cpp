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
long long getSum( long long number ) {
    return (number * (number - 1)) / 2;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long peopleCount, teamCount;cin >> peopleCount >> teamCount;
    long long temp = getSum( peopleCount - (teamCount - 1) ), ans = 0;
    while (teamCount > 0) {
        long long remaining = peopleCount % teamCount;
        if (!remaining) {
            ans += getSum( peopleCount / teamCount ) * teamCount;
            break;
        }
        ans += getSum( peopleCount / teamCount ) * (teamCount - remaining);
        peopleCount -= (peopleCount / teamCount) * (teamCount - remaining);
        teamCount = remaining;
    }
    cout << ans << ' ' << temp << endl;
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