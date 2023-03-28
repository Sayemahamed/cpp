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


//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz,ans=0;cin>>siz;
    vector<long long>dat(siz);
    for(auto&it:dat)cin>>it;
    for(long long i=0;i<siz;i++){
        long long j,k,tmp=1;
        j=i;k=i;
        while(j>0 and (dat[j]-dat[j-1])>=0){j--;tmp++;}
        while(k<siz-1 and (dat[k]-dat[k+1])>=0){k++;tmp++;}
        ans=max(tmp,ans);
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