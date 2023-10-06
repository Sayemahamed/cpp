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
    long long totalSum, numbers;cin >> totalSum >> numbers;
    int isPossible = 0;
    if ((numbers - 1) * 2 < totalSum and (totalSum - ((numbers - 1) * 2)) % 2 == 0)isPossible = 2;
    else if (numbers - 1 < totalSum and (totalSum - (numbers - 1)) % 2 == 1)
        isPossible = 1;
    if (isPossible == 0)cout << "NO" << endl;
    else if (isPossible == 1) {
        cout << "YES" << endl;
        for (long long i = 1;i < numbers;i++)cout << 1 << ' ';
        cout << totalSum - numbers + 1 << endl;
    }
    else if (isPossible == 2) {
        cout << "YES" << endl;
        for (long long i = 1;i < numbers;i++)cout << 2 << ' ';
        cout << totalSum - (numbers - 1) * 2 << endl;
    }
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