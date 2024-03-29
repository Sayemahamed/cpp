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
bool isPossible( vector<long long>& dat, long long maxWater, long long height ) {
    long long sum = 0;
    for (auto& it : dat) {
        sum += max( height - it, (long long)0 );
    }
    return sum <= maxWater;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long numberOfCorals, maxWater;
    cin >> numberOfCorals >> maxWater;
    vector<long long>dat( numberOfCorals );
    for (auto& it : dat)cin >> it;
    long long low = 0, high = 1, mid;
    while (isPossible( dat, maxWater, high ))high <<= 1;
    while (high - low > 0) {
        mid = (high + low + 1) >> 1;
        if (isPossible( dat, maxWater, mid ))low = mid;
        else high = mid - 1;
    }
    cout << low << endl;
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