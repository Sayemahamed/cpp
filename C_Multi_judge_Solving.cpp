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
    long long numberOfProblems, maxLimit, ans = 0;
    cin >> numberOfProblems >> maxLimit;
    vector<long long >dat( numberOfProblems );
    for (auto& it : dat)cin >> it;
    sort( dat.begin(), dat.end() );
    maxLimit *= 2;
    for (long long i = 0;i < numberOfProblems;i++) {
        if (dat[ i ] > maxLimit) {
            while (maxLimit < dat[ i ])
            {
                ans++;
                maxLimit *= 2;
            }
        }
        maxLimit = max( maxLimit, dat[ i ] * 2 );
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