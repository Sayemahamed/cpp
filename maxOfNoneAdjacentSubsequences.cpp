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
long long maxSubSum(vector<long long>&dat,vector<long long>&dp,long long index){
    if(index<0)return 0;
    if(dp[index])return dp[index];
    return dp[index] = max(dat[index]+maxSubSum(dat,dp,index-2),maxSubSum(dat,dp,index-1));
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz;cin >> siz;
    vector<long long>dat(siz);
    for(auto&it:dat)cin >> it;
    vector<long long>dp(siz+1);
    cout<<maxSubSum(dat,dp,siz-1)<<endl;
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