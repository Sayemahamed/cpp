#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
// data types//

//----------------------------------------------------------------//
// helper functions //

//----------------------------------------------------------------//
// solve function//
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (abs(a - c) == abs(b - d) or a == c or b == d)
    {
        if (a == c)
        {
            if (abs(a + abs(b - d)) <= 100)
                cout << a + abs(b - d) << " " << b << " " << c + abs(b - d) << " " << d << endl;
            else
                cout << a - abs(b - d) << " " << b << " " << c - abs(b - d) << " " << d << endl;
        }
        else if (b == d)
        {
            if (abs(b + abs(a - c)) < abs(b - abs(a - c)))
                cout << a << " " << b + abs(a - c) << " " << c << " " << d + abs(a - c) << endl;
            else
                cout << a << " " << b - abs(a - c) << " " << c << " " << d - abs(a - c) << endl;
        }
        else
        {
            cout << a << ' ' << d << ' ' << c << ' ' << b << endl;
        }
    }
    else
        cout << -1 << endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    // cin >> test;
    while (test--)
    {
        solve();
    }
}