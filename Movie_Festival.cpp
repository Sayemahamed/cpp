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
bool cmp(pair<long long, long long>&a, pair<long long,long long>&b)
{
    return a.second < b.second;
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz;cin>>siz;
    vector<pair<long long,long long> >dat(siz);
    for(auto&it:dat)cin>>it.first>>it.second;
    sort(dat.begin(),dat.end(),cmp);
    // for(auto&it:dat)cout<<it.first<<' '<<it.second<<endl;
    long long ans=1,end=dat[0].second;
    for(long long i=1;i<dat.size();i++)
    {
        if(dat[i].first>=end){
            end=dat[i].second;ans++;
        }
    }
    cout<<ans<<endl;
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