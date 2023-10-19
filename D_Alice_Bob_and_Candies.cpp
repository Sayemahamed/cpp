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
    long long candies;cin >> candies;
    vector<long long>data( candies );
    for (auto& it : data)cin >> it;
    long long totalAlice = data[ 0 ], totalBob = 0, totalMoves = 1, preBob = 0, preAlice = data[ 0 ];
    long long i = 1, j = candies - 1;
    while (j >= i) {
        long long temp = 0;
        if (j >= i) {
            while (j >= i and temp <= preAlice) {
                temp += data[ j-- ];
            }
            totalBob += temp;
            totalMoves++;
            preBob = temp;
        }
        temp = 0;
        if (j >= i) {
            while (j >= i and temp <= preBob) {
                temp += data[ i++ ];
            }
            totalAlice += temp;
            totalMoves++;
            preAlice = temp;
        }
    }
    cout << totalMoves << ' ' << totalAlice << ' ' << totalBob << endl;
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