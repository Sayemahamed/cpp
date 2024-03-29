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
    string dataBase, strL, strM;
    cin >> dataBase;
    long long limit, pointer = 0;cin >> limit;
    cin >> strL >> strM;
    for (long long i = 0;i < limit;i++) {
        long long workDoneTill = pointer;
        for (char j = strL[ i ];j <= strM[ i ];j++) {
            if (dataBase.find( j, pointer ) == -1) {
                cout << "YES" << endl;
                return;
            }
            workDoneTill = max( (long long)dataBase.find( j, pointer ) + 1, workDoneTill );
        }
        pointer = workDoneTill;
    }
    cout << "NO" << endl;
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