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
    long long siz,total=0;cin>>siz;
    vector<long long>dat(siz);
    for(auto&it:dat)cin>>it;
    sort(dat.begin(),dat.end());
    for(long long i=1;i<=siz/2;i++){
        cout<<dat[i]<<" "<<dat[0]<<endl;
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