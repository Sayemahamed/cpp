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
    string str;cin>>str;
    long long one=0 ,zero=0 ,flag=false;
    for(auto&it:str){
        if(zero>=7 or one>=7) flag=true;
        if(it=='0'){
            zero++;
            one=0;
        }
        else{
            one++;
            zero=0;
        }
    }
    if(zero>=7 or one>=7) flag=true;
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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