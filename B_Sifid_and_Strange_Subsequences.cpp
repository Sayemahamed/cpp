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
void add(map<long long, long long> &dat, long long value)
{
    dat[value]++;
}
void remove(map<long long, long long> &dat, long long value)
{
    dat[value]--;
    if (dat[value] == 0)
        dat.erase(dat.find(value));
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz, j = 0, k = 0;
    cin >> siz;
    vector<long long> dat(siz);
    for (auto &it : dat)
        cin >> it;
    map<long long, long long> tmp;
    for (long long i = 0; i < siz; i++)
    {
        if(tmp.empty())add(tmp,dat[j++]);
        while(j<siz && (tmp.rbegin()->first<1 or dat[j]<1))
        add(tmp,dat[j++]);
        remove(tmp, dat[i]);
        k=max(k,j-i);
    }
    cout << k << endl;
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