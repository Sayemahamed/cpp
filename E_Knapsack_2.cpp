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
long long dp(vector<vector<long long >>&memoise,vector<pair<long long,long long>>&dat,long long limit,long long idx){
    if(idx<0 or limit<0) return 0;
    if(memoise[idx][limit]!=-1)return memoise[idx][limit];
    long long ans=dp(memoise,dat,limit,idx-1);
    if(dat[idx].first<=limit)
    ans=max(ans,dp(memoise,dat,limit-dat[idx].first,idx-1)+dat[idx].second);
    memoise[idx][limit]=ans;
    return memoise[idx][limit];
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz,limit;cin>>siz>>limit;
    vector<pair<long long,long long>>dat(siz);
    vector<vector<long long >>memoise;
    for(auto&it:dat)cin>>it.first>>it.second;
    for(long long i=0;i<=siz;i++){
        vector<long long> tmp;
        for(long long j=0;j<=limit;j++){
            tmp.push_back(-1);
        }
        memoise.push_back(tmp);
    }
    cout<<dp(memoise,dat,limit,siz-1)<<endl;
    // for(long long i=0;i<=siz;i++){
    //     for(long long j=0;j<=limit;j++)cout<<memoise[i][j]<<' ';
    //     cout<<endl;
    // }
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