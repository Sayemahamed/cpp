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
    long long siz, ans = 0;
    cin >> siz;
    string str;
    cin >> str;
    for (auto &it : str)
    {
        if (it == '(')
            ans++;
        else
            ans--;
        if (ans < 0)
        {
            it = '$';
            str += ')';
            break;
        }
    }
    ans = 0;
    for (auto &it : str)
    {
        if (it == '(')
            ans++;
        else if (it == ')')
            ans--;
        if (ans < 0)
            break;
    }
    if (ans != 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
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