#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//

//----------------------------------------------------------------//
// helper functions //


//----------------------------------------------------------------//
// solve function//
void solve()
{
    bool flag = false;
    long long theNumToGet, limit, exception;cin >> theNumToGet >> limit >> exception;
    if (limit <= 2 and (theNumToGet & 1 or limit == exception) and exception == 1)cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        if (exception == 1) {
            cout << (theNumToGet) / 2 << endl;
            if (theNumToGet & 1) {
                cout << 3 << " ";
                theNumToGet -= 3;
            }
            while (theNumToGet) {
                cout << 2 << ' ';
                theNumToGet -= 2;
            }
        }
        else {
            cout << theNumToGet << endl;
            while (theNumToGet) { cout << 1 << ' ';theNumToGet--; }
        }
        cout << endl;
    }
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
}