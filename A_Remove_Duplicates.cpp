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
    long long siz;
    cin >> siz;
    vector<long long>dat(siz);
    for(auto&it:dat)cin >> it;
    stack<long long> ans;
    set<long long> tem;
    for(long long i= dat.size()-1; i>=0; i--)
    {
        long long x=dat[i];
        if (tem.find(x) == tem.end())
            ans.push(x);
        tem.insert(x);
    }
    cout << ans.size() << endl;
    while (!ans.empty())
    {
        cout << ans.top() << ' ';
        ans.pop();
    }
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