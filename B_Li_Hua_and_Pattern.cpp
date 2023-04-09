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
    long long siz, power, fucked = 0;
    cin >> siz >> power;
    bool mat[siz][siz];
    for (long long i = 0; i < siz; i++)
    {
        for (long long j = 0; j < siz; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (long long i = 0; i < siz; i++)
    {
        for (long long j = 0; j < siz; j++)
        {
            if (mat[i][j] != mat[siz - i - 1][siz - j - 1])
                fucked++;
        }
    }
    fucked >>= 1;
    if (power < fucked)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
}