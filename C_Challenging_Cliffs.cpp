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
    long long siz, i = 0, j;
    cin >> siz;
    j = siz - 1;
    vector<long long> dat(siz);
    for (auto &it : dat)
        cin >> it;
    sort(dat.begin(), dat.end());
    while(i<=j){
        cout<<dat[i++]<<' ';
        if(i<j)
        cout<<dat[j--]<<' ';
    }
    cout<<endl;
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