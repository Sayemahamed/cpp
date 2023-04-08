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
    long long siz,letters;cin>>siz>>letters;
    string firstStr,secondStr;
    map<string,string>dat;
    while(letters--){
        cin>>firstStr>>secondStr;
        if(secondStr.length()<firstStr.length()){
            dat[firstStr]=secondStr;
        }
        else dat[firstStr]=firstStr;
    }
    while(siz--){
        cin>>firstStr;
        cout<<dat[firstStr]<<' ';
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