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
    long long siz,query;cin>>siz>>query;
    vector<long long>dat(siz);
    for(auto&it:dat)cin>>it;
    while(query--){
        long long x,y;cin>>x>>y;
        x--;y--;
        while(dat[x]<=dat[x+1])x++;
        while(dat[x]>=dat[x+1])x++;
        if(x>=y)cout<<"Yes"<<endl;else cout<<"No"<<endl;
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