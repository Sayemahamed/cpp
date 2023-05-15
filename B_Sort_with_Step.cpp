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
    long long siz,dis,cnt=0;cin>>siz>>dis;
    vector<long long>dat(siz);
    for(auto&it:dat)cin>>it;
    for(long long i=0;i<siz;i++){
        if(dat[i]%dis!=((i+1)%dis))cnt++;
    }
    if(cnt==0)cout<<0<<endl;
    else if(cnt==2)cout<<1<<endl;
    else cout<<-1<<endl;
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