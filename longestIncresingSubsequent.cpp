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
long long lis(vector<long long>&dat,vector<long long>&tmp,long long idx){
    if(tmp[idx])return tmp[idx];
    long long ans=1;
    for(long long i=0;i<idx;i++){
        if(dat[idx]>dat[i]){
            ans=max(ans,lis(dat,tmp,i)+1);
        }
    }
    tmp[idx]=ans;
    return tmp[idx];
}
//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz,ans=0;cin>>siz;
    vector<long long>dat(siz),tmp(siz,0);
    for(auto&it:dat)cin>>it;
    for(long long i=1;i<siz;i++){
        ans=max(lis(dat,tmp,i),ans);
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