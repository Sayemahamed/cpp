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
    long long child,gondalaLimit;cin>>child>>gondalaLimit;
    vector<long long>dat(child);
    long long j=child-1,ans=0,i=0;
    for(auto&it:dat)cin>>it;
    sort(dat.begin(),dat.end());
    while(j>=i)
    {
        if(dat[i]+dat[j]<=gondalaLimit){
            ans++;j--;i++;
        }
        else{
            j--;ans++;
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