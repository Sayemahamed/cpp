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
    long long siz,avg=0,ans=0;cin>>siz;
    vector<long long>dat(siz);
    for(auto&it:dat)cin>>it;
    for(long long i=1;i<siz;i++){
        avg+=abs(dat[i]-dat[i-1]);
    } 
    avg/=siz;
    for(long long i=1;i<siz;i++){
        ans+=abs(avg-abs(dat[i]-dat[i-1]));
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