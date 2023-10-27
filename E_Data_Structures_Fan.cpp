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
    long long size;cin >> size;
    vector<long long>data( size + 1 );
    for (long long i = 1;i <= size;i++)cin >> data[ i ];
    string str;cin >> str;
    str = '-' + str;
    long long query;cin >> query;
    long long oneAns = 0, zeroAns = 0;
    for (long long i = 1;i <= size;i++) {
        if (str[ i ] == '0')zeroAns ^= data[ i ];
        else oneAns ^= data[ i ];
    }
    while (query--) {
        int type;cin >> type;
        if (type == 1) {
            long long x, y;cin >> x >> y;
            for (long long i = x;i <= y;i++) {
                if (str[ i ] == '1') {
                    str[ i ] = '0';
                    oneAns ^= data[ i ];
                    zeroAns ^= data[ i ];
                }
                else {
                    oneAns ^= data[ i ];
                    str[ i ] = '1';
                    zeroAns ^= data[ i ];
                }
            }
        }
        else {
            int x;
            cin >> x;
            if (x) {
                cout << oneAns << ' ';
            }
            else {
                cout << zeroAns << ' ';
            }
        }
    }
    cout << endl;
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