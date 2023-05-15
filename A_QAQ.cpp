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
long long dp(vector<int>&dat,string str,long long idx){
    if(idx==0)return 0;
    if(dat[idx])return dat[idx];
    long long ans=dp(dat,str,idx-1);
    if(str[idx]=='Q'){
        for(long long i=0;i<idx;i++){
            if(str[i]=='Q')
            for(long long j=i+1;j<idx;j++)
            if(str[j]=='A')
            ans++;
        }
    }
    dat[idx]=ans;
    return dat[idx];
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    string str;cin>>str;
    vector<int>dat(str.length(),0);
    cout<<dp(dat,str,str.length()-1)<<endl;
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