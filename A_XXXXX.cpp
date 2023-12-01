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
    long long sum = 0, numbers, hate;cin >> numbers >> hate;
    vector<long long> dat( numbers );
    for (auto& it : dat)cin >> it, sum += it;
    long long i = 0, j = 0, temp = sum;
    while (!(sum % hate) and i < dat.size())sum -= dat[ i++ ];
    while (!(temp % hate) and j < dat.size())temp -= dat[ dat.size() - 1 - j++ ];
    i = min( i, j );
    if (i == dat.size())cout << -1 << endl;
    else cout << dat.size() - i << endl;
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