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
    long long candies,questions;cin>>candies>>questions;
    vector<long long>dat(candies),preCompute(candies);
    for(auto&it:dat)cin>>it;
    sort(dat.rbegin(),dat.rend());
    for(long long i=0;i<candies;i++)
    {
        preCompute[i] = dat[i];
        if(i)preCompute[i]+=preCompute[i-1];
    }
    while(questions--)
    {
        long long n;cin>>n;
        auto it =lower_bound(preCompute.begin(),preCompute.end(),n);
        if(it==preCompute.end())cout<<-1<<endl;
        else cout<<(it-preCompute.begin())+1<<endl;
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