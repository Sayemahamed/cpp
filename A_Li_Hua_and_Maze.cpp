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
    long long sizX, sizY;
    cin >> sizX >> sizY;
    long long X1, Y1, X2, Y2;
    cin >> X1 >> Y1 >> X2 >> Y2;
    long long ans1 = 0, ans2 = 0;
    if (X1 > 1)
        ans1++;
    if (X1 < sizX)
        ans1++;
    if (Y1 > 1)
        ans1++;
    if (Y1 < sizY)
        ans1++;
    if (X2 > 1)
        ans2++;
    if (X2 < sizX)
        ans2++;
    if (Y2 > 1)
        ans2++;
    if (Y2 < sizY)
        ans2++;
        cout<<min(ans1,ans2)<<endl;
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