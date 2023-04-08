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
long long preSum(vector<long long>&dat,long long idx,long long remining){
    if(remining>0)return dat[idx-1] + preSum(dat,idx-1,remining-1);
    else return 0;
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz,num;cin >> siz>> num;
    vector<long long>dat(siz);
    for(auto&it:dat)cin>>it;
    cout<<preSum(dat,siz,num)<<endl;
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