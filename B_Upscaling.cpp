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
    int scale;cin >> scale;
    for (int i = 0;i < scale;i++) {
        if (i & 1) {
            for (int j = 0;j < scale;j++) {
                if (j & 1) {
                    cout << "##";
                }
                else {
                    cout << "..";
                }
            }
            cout << endl;
            for (int j = 0;j < scale;j++) {
                if (j & 1) {
                    cout << "##";
                }
                else {
                    cout << "..";
                }
            }
            cout << endl;
        }
        else {
            for (int j = 0;j < scale;j++) {
                if (j & 1) {
                    cout << "..";
                }
                else {
                    cout << "##";
                }
            }
            cout << endl;
            for (int j = 0;j < scale;j++) {
                if (j & 1) {
                    cout << "..";
                }
                else {
                    cout << "##";
                }
            }
            cout << endl;
        }
    }
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    int test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
}