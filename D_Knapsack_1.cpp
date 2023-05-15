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
long long dp(vector<pair<long long,long long>>&dat,vector<vector<long long >>&Ans,long long idx,long long limit){
    if(idx<0 or limit==0)return 0;
    if(Ans[limit][idx])return Ans[limit][idx];
    long long ans=dp(dat,Ans,idx-1,limit);
    if(limit>=dat[idx].first)
    ans=max(ans,dp(dat,Ans,idx-1,limit-dat[idx].first)+dat[idx].second);
    Ans[limit][idx]=ans;
    return Ans[limit][idx];
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long items,limit;cin>>items>>limit;
    vector<pair<long long,long long>>item(items);
    for(auto&it:item)cin>>it.first>>it.second;
    vector<vector<long long >>ans;
    for(long long i=0;i<=limit;i++){
        vector<long long>tmp;
        for(long long j=0;j<=items;j++){
            tmp.push_back(0);
        }
        ans.push_back(tmp);
    }
    cout<<dp(item,ans,items-1,limit);
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