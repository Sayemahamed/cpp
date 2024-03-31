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
    int numbers, turn;cin >> numbers >> turn;
    vector<int>bitFrequency( 32, 0 );
    int ans = 0;
    for (int i = 0; i < numbers; i++) {
        int x;cin >> x;
        for (int j = 0; j < 32; j++) {
            if (x & (1 << j)) {
                bitFrequency[ j ]++;
            }
        }
    }
    for (int i = 30;i >= 0;i--) {
        if (numbers - bitFrequency[ i ] <= turn or bitFrequency[ i ] == numbers) {
            ans += (1 << i);
            turn -= numbers - bitFrequency[ i ];
        }
    }
    cout << ans << endl;
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