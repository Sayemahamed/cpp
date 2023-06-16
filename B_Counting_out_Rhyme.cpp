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
    long long siz,turns;cin>>siz>>turns;
    vector<long long>turn(turns),child(siz+1);
    for(long long i=0;i<=siz;i++)child[i]=i;
    for(auto&it:turn)cin>>it;
    long long curLocation=1;
    for(long long i=0;i<turns;i++){
        long long ans=(curLocation+turn[i])%(child.size()-1);
        if(ans==0)ans=child.size()-1;
        curLocation= ans;
        cout<<child[ans]<<' ';
        child.erase(child.begin()+ans);
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
    // cin >> test;
    while (test--)
    {
        solve();
    }
}