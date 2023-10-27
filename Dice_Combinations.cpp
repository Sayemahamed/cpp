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
long long mod = 1000000007;
//----------------------------------------------------------------//
// helper functions //
long long getAns( vector<long long >& ans, vector<long long >& dice, long long sum ) {
    if (ans[ sum ])return ans[ sum ];
    if (sum == 0)return 1;
    long long total = 0;
    for (auto& it : dice) {
        if (it <= sum) {
            total += getAns( ans, dice, sum - it );
            total %= mod;
        }
    }
    return ans[ sum ] = total;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    vector<long long >dice = { 1,2,3,4,5,6 };
    long long sum;cin >> sum;
    vector<long long >ans( sum + 7, false );
    cout << getAns( ans, dice, sum ) << endl;
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