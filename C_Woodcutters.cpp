#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
// data types//
struct tree
{
    long long root, height;
    bool right = false;
};

//----------------------------------------------------------------//
// helper functions //

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long totalTrees, ans = 1;
    cin >> totalTrees;
    vector<tree> dat(totalTrees);
    dat[0].right = false;
    for (auto &it : dat)
        cin >> it.root >> it.height;
    for (long long i = 1; i < totalTrees; i++)
    {
        long long prePosition = dat[i - 1].root;
        if (dat[i - 1].right)
            prePosition += dat[i - 1].height;
        if (i == totalTrees - 1)
            ans++;
        else if (dat[i].root > prePosition + dat[i].height)
        {
            ans++;
            dat[i].right = false;
        }
        else if (i < totalTrees - 1 and dat[i].root + dat[i].height < dat[i + 1].root)
        {
            dat[i].right = true;
            ans++;
        }
    }
    cout << ans << endl;
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