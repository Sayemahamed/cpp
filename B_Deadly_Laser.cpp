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
    long long n, m, laserX, laserY, laserPower;
    cin >> n >> m >> laserX >> laserY >> laserPower;
    if ((laserX + laserPower >= n || laserY - laserPower <= 1) and (laserY + laserPower >= m || laserX - laserPower <= 1))
        cout << -1 << endl;
    else
        cout << n + m - 2 << endl;
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