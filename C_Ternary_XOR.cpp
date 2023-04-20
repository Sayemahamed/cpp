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
    long long siz,firstOne;cin>>siz;
    string str,ans1="",ans2="";
    cin>>str;
    firstOne=str.length()+7;
    for(long long i=0;i<siz;i++)if(str[i]=='1'){
        firstOne = i;
        break;
    }
    for(long long i=0;i<siz;i++){
        if(firstOne>i){
            ans1=ans1+min('1',str[i]);
            ans2=ans2+min('1',str[i]);
        }
        else if(firstOne==i){
            ans1=ans1+str[i];
            ans2=ans2+'0';
        }
        else {
            ans2=ans2+str[i];
            ans1+='0';
        }
    }
    cout<<ans1<<endl<<ans2<<endl;
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