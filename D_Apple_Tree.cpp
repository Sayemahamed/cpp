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
long long dfs(vector<long long>dat[], vector<long long>&ans,vector<bool>&isVisited,long long x){
    if(dat[x].size()==1 and x!=1)ans[x]=1;
    isVisited[x]=true;
    for(auto&it:dat[x]){
        if(isVisited[it])continue;
        ans[x]+=dfs(dat,ans,isVisited,it);
    }
    return ans[x];
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz;cin>>siz;
    vector<long long>dat[siz+1],ans(siz+1,0);
    vector<bool> isVisited(siz+1,false);
    long long x,y;
    for(long long i=1;i<siz;i++){
        cin>>x>>y;
        dat[y].push_back(x);
        dat[x].push_back(y);
    }
    long long assumption;cin >> assumption;
    dfs(dat,ans,isVisited,1);
    if(ans[1]==0)ans[1]=1;
    while(assumption--){
        cin>>x>>y;
        cout<<ans[x]*ans[y]<<endl;
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
    cin >> test;
    while (test--)
    {
        solve();
    }
}