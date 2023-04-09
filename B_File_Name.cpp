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
    long long siz,ans=0,tmp=0;cin>>siz;
    string str;cin>>str;
    for(auto&it:str){
        if(it=='x')tmp++;
        else{
            ans+=max(tmp-2,(long long)0);
            tmp=0;
        }
    }
            ans+=max(tmp-2,(long long)0);
            cout<<ans;
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