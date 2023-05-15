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
long long dp(vector<long long>&dat,long long num){
    long long ans=0;
    for(auto&it:dat)
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long num;cin>>num;
    vector<long long>dat;
    dat.push_back(100);
    dat.push_back(20);
    dat.push_back(10);
    dat.push_back(5);
    dat.push_back(1);
    cout<<dp(dat,num)<<endl;
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