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
    double numberOfBranches, base, height;
    cin >> numberOfBranches >> base >> height;
    vector<double>branchHeights( numberOfBranches );
    for (auto& it : branchHeights)cin >> it;
    double area = height * base * 0.5;
    double ans = area * numberOfBranches;
    for (long long i = 0;i < numberOfBranches - 1;i++) {
        double ratio = 1 - (min( branchHeights[ i + 1 ] - branchHeights[ i ], height )) / height;
        ans -= area * ratio * ratio;
    }
    cout << fixed << setprecision( 7 ) << ans << endl;
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