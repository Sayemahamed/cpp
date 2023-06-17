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
    string str,minStr,ans="";
    cin>>str;
    minStr=str;
    char tmp=str[str.length()-1];
    stack<char>second;
    for(long long i=str.length()-1;i>=0;i--){
        tmp=min(tmp,str[i]);
        minStr[i]=tmp;
    }
    for(long long i=0;i<str.length();i++){
        while(second.size() and second.top()<=minStr[i] ){
            ans+=second.top();
            second.pop();
        }
        second.push(str[i]);
    }
    while(second.size()){
        ans+=second.top();
        second.pop();
    }
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