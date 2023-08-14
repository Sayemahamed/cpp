#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define all(x)  x.begin(), x.end()
#define rall(x)  x.rbegin(), x.rend()
// #define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//

//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve() {
    long long siz;cin >> siz;
    vector<long long>data( siz + 1, 0 );
    for (long long i = 1;i <= siz;i++) cin >> data[ i ];
    long long low = 1, heigh = siz, mid;
    while (heigh - low > 0) {
        mid = (heigh + low - 1) >> 1;
        long long sum = 0;
        cout << "? " << mid - low + 1 << ' ';
        for (long long i = low;i <= mid;i++) {
            cout << i << ' ';
            sum += data[ i ];
        }
        cout << endl;
        long long tmp;cin >> tmp;
        if (sum == tmp)low = mid + 1;else heigh = mid;
    }
    cout << "! " << low << endl;
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