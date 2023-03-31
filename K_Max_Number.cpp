#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//
long long ans=INTMAX_MIN;
//----------------------------------------------------------------//
// helper functions //
void maxNumber(vector<long long >&dat,long long idx){
    if(idx==dat.size()) return;
    ans=max(dat[idx],ans);
    maxNumber(dat,idx+1);
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long numbers;cin >> numbers;
    vector<long long>dat(numbers);
    for(auto&it:dat)cin>>it;
    maxNumber(dat,0);
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