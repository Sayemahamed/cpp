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
    long long stations,busCapacity,ans=0,tmp=0,initial;cin>>stations>>busCapacity;
    initial=0;
    while(stations--){
        long long x;cin>>x;
        tmp+=x;
        ans=max(tmp,ans);
        if(tmp<0)initial=min(tmp,initial);
    }
    cout<<max((busCapacity-ans)+initial+1,(long long)0)<<endl;
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