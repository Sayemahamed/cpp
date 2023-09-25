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
struct Trees {
    long long height, fruits;
    Trees() { height = 0; fruits = 0; }
};

//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve() {
    long long numberOfTrees, maxStealing, ans = 0, j = 0, sum = 0;
    cin >> numberOfTrees >> maxStealing;
    vector <Trees>dat( numberOfTrees );
    for (auto& it : dat)cin >> it.fruits;
    for (auto& it : dat)cin >> it.height;
    for (long long i = 0;i < numberOfTrees;i++) {
        while (j < numberOfTrees - 1 and dat[ j ].fruits + sum <= maxStealing and dat[ j ].height % dat[ j + 1 ].height == 0)sum += dat[ j++ ].fruits;
        ans = max( ans, j - i );
        if (j == numberOfTrees - 2 and dat[ j + 1 ].fruits + sum <= maxStealing)
            ans = max( ans, j - i + 1 );
        sum -= dat[ i ].fruits;
        j = max( i, j );
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