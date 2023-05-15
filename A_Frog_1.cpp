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
long long dp(vector<long long>&dat,vector<long long>&memoise,long long idx){
    if(idx<0)return INT32_MAX;
    if(idx==0)return 0;
    if(memoise[idx])return memoise[idx];
    if(idx)
    dp(dat,memoise,idx-1);
    long long ans=INT64_MAX;
    for(long long i=1;i<=2;i++){
        ans=min(memoise[idx-i]+abs(dat[idx]-dat[idx-i]),ans);
    }
    memoise[idx]=ans;
    return memoise[idx];
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long numberOfStones;cin>>numberOfStones;
    vector<long long >stones(numberOfStones),memoise(numberOfStones+1,0);
    for(auto&it:stones)cin>>it;
    cout<<dp(stones,memoise,numberOfStones-1);
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